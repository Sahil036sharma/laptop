const express = require('express');
const bodyParser = require('body-parser');

const app = express();
const port = 3000;

app.use(bodyParser.json());

let todos = [
    { id: 1, title: 'Learn Node.js', completed: false },
    { id: 2, title: 'Build a REST API', completed: true },
    { id: 3, title: 'Read about Express.js', completed: false }
];
let currentId = 4;

app.post('/api/todos', (req, res) => {
    const { title } = req.body;
    if (!title) {
        return res.status(400).json({ error: 'Title is required' });
    }

    const newTodo = {
        id: currentId++,
        title,
        completed: false
    };
    todos.push(newTodo);
    res.status(201).json(newTodo);
    
});

app.get('/api/todos', (req, res) => {
    res.json(todos);
});

app.get('/api/todos/:id', (req, res) => {
    const { id } = req.params;
    const todo = todos.find(t => t.id === parseInt(id));

    if (!todo) {
        return res.status(404).json({ error: 'Todo not found' });
    }

    res.json(todo);
});

app.put('/api/todos/:id', (req, res) => {
    const { id } = req.params;
    const { title, completed } = req.body;

    const todo = todos.find(t => t.id === parseInt(id));

    if (!todo) {
        return res.status(404).json({ error: 'Todo not found' });
    }

    if (title !== undefined) todo.title = title;
    if (completed !== undefined) todo.completed = completed;

    res.json(todo);
});

app.delete('/api/todos/:id', (req, res) => {
    const { id } = req.params;
    const todoIndex = todos.findIndex(t => t.id === parseInt(id));

    if (todoIndex === -1) {
        return res.status(404).json({ error: 'Todo not found' });
    }

    todos.splice(todoIndex, 1);
    res.status(204).end();
});

app.listen(port, () => {
    console.log(`Server is running on http://localhost:${port}`);
});
