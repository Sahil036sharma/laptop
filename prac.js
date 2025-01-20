// const express=require('express')  // import the express lib.
// const app=express();

// app.use(express.json());  // middleware to parse JSON request body.


// let todos=[
// {id:1,val:"this is first item"},
// {id:2,val:"this is second item"}
// ];

// app.get('/todos',(req,res)=>{
// res.json(todos);  // return the todo list in json format
// });


// app.get('/addtodos',(req,res)=>{
// const newtodo={
// id:todos.length+1,
// title:req.body.title
// };
// todos.push(newtodo);
// res.json(newtodo);
// });
// app.listen(3404,()=>{
// console.log("the server is running");
// });



const express = require('express');
const mongoose = require('mongoose');
const bodyParser = require('body-parser');

const app = express();
app.use(bodyParser.json());

// Connect to MongoDB
mongoose.connect('mongodb://localhost:27017/school', { useNewUrlParser: true, useUnifiedTopology: true });

// Define the student schema
let studentSchema = new mongoose.Schema({
    name: String,
    age: Number,
    city: String,
    rollno: Number,
    college: String
});

let Student = mongoose.model('Student', studentSchema);

// API to update student details
app.put('/students/:id', async (req, res) => {
    try {
        let studentId = req.params.id;
        let updatedData = req.body;

        let student = await Student.findByIdAndUpdate(studentId, updatedData, { new: true });
        if (!student) {
            return res.status(404).send('Student not found');
        }

        res.send(student);
    } catch (err) {
        res.status(500).send(err.message);
    }
});

// Start the server
app.listen(3000, () => {
    console.log('Server is running on port 3000');
});
