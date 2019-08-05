//let vs Var
function test(){
    var num1=120
    console.log(`num1 in test()${num1} `)
    {
        console.log(`inner Blog Begins`)
        let num1=100
        //var num1=100
        console.log(num1)
    }
    console.log(`num1 in test()${num1}`)
}
test();