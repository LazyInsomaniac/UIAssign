let array1=Array.of(1,2,3,4);
let array2=Array.from(array1,(value)=> value*2);

for(let val of array1)
console.log(`Array val:${val}`)

console.log(`Array2`)
for(let val of array2)
console.log(`Array val:${val}`)

