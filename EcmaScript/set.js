var randSet= new Set();
randSet.add(10);
randSet.add("word")
console.log(`has 10:${randSet.has(10)}`)
console.log(`Set Size:${randSet.size}`)

randSet.add("Blah Blah")
for(let val of randSet)
console.log(`Set Val:${val}`);