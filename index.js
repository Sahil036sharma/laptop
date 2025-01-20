// let express = require('express');
// let app = express();

// let users = [
//     { id: 1, name: "sahil", rollno: 465 },
//     { id: 2, name: "ajay", rollno: 23 },
//     { id: 3, name: "amit", rollno: 456 }
// ];

// console.log(users);

// app.get('/getuser/:id', (req, res) => {
//     let id = parseInt(req.params.id);  // Convert the id to a number
//     let user = null;  // Initialize user variable to null

//     // Use a for loop to find the user
//     for (let i = 0; i < users.length; i++) {
//         if (users[i].id === id) {
//             user = users[i];
//             break;  // Exit the loop once the user is found
//         }
//     }

//     if (user) {
//         res.send(`${user.name} with roll number ${user.rollno} is in the array.`);
//     } else {
//         res.send(`User with id ${id} is not in the array.`);
//     }
// });

// app.listen(4545, () => {
//     console.log('Server is running on port 4545');
// });

// let express= require('express')
// let app = express()

// let users = [
//     {id:1, name:'john', rollno:76},
//     {id:2, name:'geeta', rollno:75},
//     {id:3, name:'sahil', rollno:77},
//     {id:4, name:'shubham', rollno:71},
//     {id:5, name:'Ajay', rollno:58},
//     {id:6, name:'Amit', rollno:86},
// ]
// app.get('/',(req,res)=>{
//     res.send('Hello World')
// })
// app.get('/getUser/:id',(req,res)=>{
// console.log(req.params)
// let id = req.params.id
// for(let i=0;i<users.length;i++){
//     if(users[i].id == id){
//         res.json(users[i])
//     }
// }

// })

// app.get('/sendhtml',(req,res)=>{
//     res.sendFile(__dirname+'/index.html');
// })

// app.listen(4545)


//hit the value and push in it and the value not exist in it push on array

const express = require('express');
let app = express();

let food = [{ id: 1, val: 'milk' }, { id: 2, val: 'chai' }];

app.get('/addtodo/:val', (req, res) => {
    let val = req.params.val;
    let foundItem = food.find(item => item.val === val);

    if (foundItem) {
        res.json(foundItem);
    } else {
        // Find the max id and increment it to assign a new id
        let newId = food.length > 0 ? Math.max(...food.map(item => item.id)) + 1 : 1;
        let newItem = { id: newId, val: val };
        food.push(newItem);
        res.json(newItem);
    }
});

app.listen(3000, () => {
    console.log("Server port 3000 is running");
});
