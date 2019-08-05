var randMap= new Map();
randMap.set("Key1","Random String");
randMap.set("Key2",100);
console.log(`Key 1 ${randMap.get("Key1")}`)
console.log(`Key 2 ${randMap.get("Key2")}`)

console.log(`Map Size: ${randMap.size}`)

randMap.forEach(function(value,key){
    console.log(`${key}:${value}`);
});