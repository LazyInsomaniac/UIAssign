let Lname="Sambhav"
for(let c of Lname){
    console.log(`${c}`);
}
for(let c in Lname){
    console.log(`${c}`);
}
console.log("Hello".repeat(3)+" ");
console.log(Lname.startsWith("Sa")); //Return T or F
console.log(Lname.endsWith("hi"));   //Return T or F   
console.log(Lname.includes("war"));  //Return T or F