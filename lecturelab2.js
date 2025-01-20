// //write a function main and pass two fuction as parameters to it cb1 and cb2;
// // Define cb1 in such a way that will add two numbers;
// // Define cb2 in such a way that will difference two numbers;

function cb1(x,y){
    return x+y;
}
function cb2(x,y){
    return x-y;
}

function main(cb1,cb2){
    const sum = cb1(2, 4); 
    const difference = cb2(5, 1); 
    console.log("Sum:", sum);
    console.log("Difference:", difference);
}
main(cb1,cb2);

// // print array using the cb function

// function main(cb,arr){
//     const result = cb(arr);
// }
// main(func,[1,2,3,4,5]);
// function func(array){
//     array.forEach(v => {
//         console.log(v);
//     });
// }


// // Given array  [1,2,3,4] ,get sum using reduce function

// const arr = [1,2,3,4];

// function cb(arr,cur_val) {
//     console.log(arr, cur_val)
//     return  arr+cur_val;
// }
// const sum = arr.reduce(cb, 0); 
// console.log(sum); 


//Given array [1,2,3,4,5,6] make a matrix 
// Output is :[[1,3,5],[2,4,6]]

// const array = [1, 2, 3, 4];
// function cb(a,cur_val){
//     a.push(cur_val);
//     return a;
// }
// const new_arr= array.reduce(cb,[])
// console.log(new_arr)


/// Given the array=[1,2,3,4,5,6],make a 2-d array acc to even and odd
// const array=[1,2,3,4,5,6]
// function cb(a,cur_val){
//     if(cur_val%2==0){
//     a[1].push(cur_val)
//     }
//     else{
//         a[0].push(cur_val)
//     }
//     return a;
// }
// const arr=array.reduce(cb,[[],[]])
// console.log(arr);


//Given the array ['a','b','c','b','c','a','a'] count the freqency of each

const array=['a','b','c','b','c','a','a'];
function cb(a,cur_val){
    if(a[cur_val]){
        a[cur_val]++;
    }
    else{
        a[cur_val]=1;
    }
    return a;
}
const count=array.reduce(cb,{})
console.log(count);