let capital=Symbol("State Capital");
let tamilnadu={};
tamilnadu[capital]="chennai";

console.log(`Capital of TN is ${tamilnadu[capital]}`);
console.log(`Capital of TN is ${capital.toString()}`);

let employNum=Symbol.for("Employee Number");
let bobSmith={};
bobSmith[employNum]=10;
let sallyMarks={};
sallyMarks[employNum]=11;
console.log(`Bob :${bobSmith[employNum]}`)
console.log(`Sally : ${sallyMarks[employNum]}`)