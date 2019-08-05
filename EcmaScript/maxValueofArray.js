var myarrray=[2,4];
var max=Math.max.apply(Math,myarrray); //ES5 Syntax
console.log(`Max Value of An Array ${max}`)
myarrray=[5,7,35,78];
max=Math.max(...myarrray);
console.log(`max value of an array ${max}`) //Spread Operator Intro in ES6