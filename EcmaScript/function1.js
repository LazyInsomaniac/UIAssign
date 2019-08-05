function getSumMore(...vals){
    let sum=0;
    for(i=0,len=vals.length;i<len;i++){
        sum+=vals[i];
    }
    console.log(`The Sum of Given Numbers are ${sum}`);
}

getSumMore(2,3,5);
getSumMore(3,7,9,2);
let val=[1,2,3,4,5];
getSumMore(...val);