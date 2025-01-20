let mongoose = require('mongoose');

let userSchema = new mongoose.Schema({

    name:'String',
    age:'Number',
    city:'String',
    phone:'Number',
    email:'String',
    password:'string',

})
module.exports =mongoose.model("users",userSchema); 