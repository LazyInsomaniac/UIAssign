function getSum(num1=1,num2=1){
    document.write(`${num1}+ ${num2}= ${num1+num2}<br>`);
    document.write(`${arguments[0]},${arguments[1]}<br>`);
}
getSum();
getSum(4);
getSum(3,4);