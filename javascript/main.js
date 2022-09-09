

// // naive approach
// function fizzBuzz(n){
//     for (let i = 1; i < n+1; i++) {
//         if (i % 15 == 0 ){
//             console.log("fizzbuzz");
//         }
//         else if (i % 3 == 0){
//             console.log("fizz");
//         }
//         else if (i % 5 == 0){
//             console.log("buzz")
//         }
//         else console.log(i)
//     }
// }

function fizzBuzz(n){
    for (let i = 1; i < n+1; i++) {
    let output = "";

    if (i % 3 == 0) { output += "Fizz"; }
    if (i % 5 == 0) { output += "Buzz"; }

    if(output == "") { output = i; }

    console.log(output);
    }
    
}


fizzBuzz(100)