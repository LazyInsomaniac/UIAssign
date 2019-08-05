let valsArr=[1,2,3,4,5,6];

let sumVals=valsArr.map((a,b)=>(a+b));      //1,3,5,7,9,11
console.log(`sum : ${sumVals}`);

let sumVals1=valsArr.reduce((a,b)=>(a+b));  //21
console.log(`sum : ${sumVals1}`);

let evens=valsArr.filter(v=> v%2==0);       //2,4,6
console.log(`Evens : ${evens}`);

let double=valsArr.map(v=> v*2);            //2,4,6,8,10,12
console.log(`Double : ${double}`);