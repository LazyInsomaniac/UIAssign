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