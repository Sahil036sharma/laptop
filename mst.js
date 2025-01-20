const express = require('express');
const bodyParser = require('body-parser');

const app = express();
app.use(bodyParser.json());

// In-memory storage for to-do items
let todos = [
    { id: 1, ele: 'butter' },
    { id: 2, ele: 'eggs' },
    { id: 3, ele: 'cheese' }
];

// GET method to retrieve all to-do items
app.get('/todos', (req, res) => {
    res.json(todos);
});

// POST method to add a new to-do item
app.post('/todos', (req, res) => {
    const newTodo = req.body;
    // Generate a new ID
    newTodo.id = todos.length ? todos[todos.length - 1].id + 1 : 1;
    todos.push(newTodo);
    res.status(201).json(newTodo);
});

// Start the server
app.listen(3000, () => {
    console.log('Server is running on port 3000');
});
