function createAnimal(name,owner){
    return{
        name,
        owner,
        getInfo(){
            return `This is ${this.name} owned by ${this.owner}`;
        },
        address:{
            street:`123 Main Street`,
            city:`Chennai`,
        }
    };
}
    var spot=createAnimal(`spot`,`Time`);
    console.log(`${spot.getInfo()}`);
    console.log(`${spot.name} is at ${spot.address.street}`);
    console.log(`${Object.getOwnPropertyNames(spot).join(",")}`)

    let {name,owner}=spot;
    console.log(`Name:${name}`)
    console.log(`Owner:${owner}`);
    let {address}=spot;
    console.log(`Address:${address.street}`);

    let favNums=[2.718,3.5676,5.3533];
    let[,,myNum]=favNums;
    console.log(`myNum:${myNum}`);

    let[,...last2]=favNums;
    console.log(`2nd Num:${last2[0]}`);

    //Switch the Values
    let val1=10, val2=20;
    [val1,val2]=[val2,val1];
    console.log(`Value1: ${val1} Value 2:${val2}`);