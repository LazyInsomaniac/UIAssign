function doMath(strings, ...values)
{
    if(strings[0]=='Add')
    {
        console.log(`${values[0]} + ${values[1]} =${values[0]+values[1]}`)
    }
    else if(strings[0]=='Sub')
    {
        console.log(`${values[0]} - ${values[1]}=${values[0]-values[1]}`)
    }
}
doMath `Add${10} ${20}`;
doMath `Add${20} ${5}`;