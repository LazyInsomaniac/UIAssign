class Mammal{
    constructor(name){
        this._name=name;
    }
    get name(){
        return this._name;
    }
    set name(name){
        return this._name=this.name;
    }
    static makeMammal(name){
        return new Mammal(name);
    }
    getInfo(){
        return `${this._name} is a Mammal`;
    }
}
    let monkey=new Mammal(`Fred`);
    console.log(`Mammal 1:${monkey.name}`);
    monkey.name=`Mark`;
    console.log(`Mammal 2:${monkey.name}`);

    let chipmunk=Mammal.makeMammal("chipper");
    console.log(`Mammal 3:${chipmunk.name}`)

    class Marsupial extends Mammal
    {
        constructor(name,hasPouch){
            super(name);
            this._hasPouch=hasPouch;
        }
        get hasPouch(){
            return this._hasPouch;
        }
        set hasPouch(hasPouch){
            return this._hasPouch=hasPouch;
        }
        getInfo(){
            return `${this.name} is Marsupial`; 
        }
    }
        let kangaroo = new Marsupial("Paul",true);
        console.log(`It is ${kangaroo.hasPouch}.${kangaroo.name} has a pouch`)
        console.log(`${chipmunk.getInfo()}`)
        console.log(`${kangaroo.getInfo()}`)

        function getClass(classType){
            if(classType==1)
            return Mammal;
            else
            return Marsupial;
        }
        class Koala extends getClass(1){        //Inheriting Function
            constructor(name){
            super(name);
            }
        }
        let carl = new Koala("carl");
        console.log(`${carl.getInfo()}`)