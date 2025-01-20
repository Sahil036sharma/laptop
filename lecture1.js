const express = require('express');
const mongoose = require('mongoose');
const app = express();

// Middleware to parse JSON bodies
app.use(express.json());

mongoose.connect('mongodb+srv://sahil036:sahil036@cluster0.zviqr.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0');

let todos = [
    { id: 1, todoValue: "milk" },
    { id: 2, todoValue: "egg" }
];

// Route to list all todos
app.get('/getAllTODO', (req, res) => {
    
});

// Route to add a new todo
app.get('/addTODO/:todo', (req, res) => {
    console.log(req.params.todo)
    let newtodo={
        id:todos.length+1,
        todoValue:req.params.todo
    }
    todos.push(newtodo)
    res.send(newtodo)

    console.log()
});
app.listen(3000, () => {
    console.log('Server is running on web');
});
