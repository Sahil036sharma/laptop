// const cluster=require('cluster');
// const express =require('express');
// const port=3000;
// const cCPUs=require('os').cpus().length;

// if(cluster.isPrimary){

//     for(let i=0;i<cCPUs;i++){
//         cluster.fork();
//     }
// }
// else{
//     const app=express();
//     app.get('/',(req,res)=>{
        

//         for(let i=0;i<2000000000;i++){
//             res.send('hello world'+process.pid);
//         }

//     });

//     app.listen(port,()=>{
//         console.log(process.pid);
//         console.log('server chal gaya');
//     });
// }


const express = require('express');
const app = express();
const bodyParser = require('body-parser');
app.use(bodyParser.json());

let todos = [
    { id: 1, task: 'Buy milk', completed: false },
    { id: 2, task: 'Write report', completed: false }
];

app.post('/todos/update', (req, res) => {
    const { id, task, completed } = req.body;

    let todo = todos.find(todo => todo.id === id);
    if (todo) {
        if (task !== undefined) todo.task = task;
        if (completed !== undefined) todo.completed = completed;
        res.status(200).json({ message: 'Todo updated successfully', todo });
    } else {
        res.status(404).json({ message: 'Todo not found' });
    }
});

app.listen(3000, () => {
    console.log('Server running on port 3000');
});
