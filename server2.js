let express = require('express');
let mongoose = require('mongoose');
const app = express();
let cors = require('cors');
app.use(cors());

const multer = require('multer');
const path = require('path');
const cloudinary = require('cloudinary').v2;
const { CloudinaryStorage } = require('multer-storage-cloudinary');

// Cloudinary Configuration
cloudinary.config({ 
    cloud_name: 'dpcoby4dv', 
    api_key: '746218332495576', 
    api_secret: 'RZlzOwcg-sz2J4ZF7R4IQ0waMeU' 
});

// Multer-Cloudinary Storage Configuration
const storage = new CloudinaryStorage({
    cloudinary: cloudinary,
    params: {
        folder: 'blogpost',
        allowedFormats: ['jpg', 'png', 'gif'],
    },
});

const upload = multer({ storage: storage }).single('image');

// MongoDB Connection
mongoose.connect('mongodb+srv://sahil036:sahil036@cluster0.zviqr.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0', {
    useNewUrlParser: true,
    useUnifiedTopology: true,
}).then(() => {
    console.log('Connected to MongoDB');
}).catch((err) => {
    console.error('MongoDB connection error:', err);
});

// BlogPost Schema and Model
const blogPostSchema = new mongoose.Schema({
    title: String,
    content: String,
    imageUrl: String,
    createdAt: { type: Date, default: Date.now }
});

const BlogPost = mongoose.model('BlogPost', blogPostSchema);

// Route to Upload Image and Create Blog Post
app.post('/upload', (req, res) => {
    upload(req, res, async (err) => {
        if (err) {
            return res.status(500).json({ error: err.message });
        }

        // Creating a new Blog Post with Image URL
        const newPost = new BlogPost({
            title: req.body.title,
            content: req.body.content,
            imageUrl: req.file.path // Path is automatically set by Cloudinary
        });

        try {
            const savedPost = await newPost.save();
            res.status(201).json({ message: 'Blog post created successfully', post: savedPost });
        } catch (error) {
            res.status(500).json({ error: 'Failed to save blog post' });
        }
    });
});

// Basic Route for Testing
app.get('/', (req, res) => {
    res.send('Hello, welcome to the blog API');
});

// Start the Server
const PORT = process.env.PORT || 5000;
app.listen(PORT, () => {
    console.log(`Server running on port ${PORT}`);
});
