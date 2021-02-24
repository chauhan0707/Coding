function bmiCalculator(weight,height) {

    var bmi = Math.round(weight / Math.pow(height,2));
    var interpretation;
    
    if (bmi < 18.5) {
    interpretation =console.log("Your BMI is " + bmi + ", so you are underweight.");
}

if (bmi >= 18.5 && bmi < 24.9) {
    interpretation =console.log("Your BMI is " + bmi + ", so you have a normal weight.");
}

if (bmi >= 25) {
    interpretation =console.log("Your BMI is " + bmi + ", so you are overweight.");
}
   
   return interpretation;
    
}

bmiCalculator(63,1.65);
/*function getMilk(money,costPerBottle)
{

    console.log("Buy "+calcBottles(money,costPerBottle)+" bottles of milk.");
    return calcChange(money,1.5);
}
function calcBottles(startingMoney,costPerBottle)
{
    var numberofBottles=Math.floor(startingMoney/costPerBottle);
    return numberofBottles;
}
function calcChange(startingAmount,costPerBottle)
{
    var change=startingAmount % costPerBottle;
    return change;
}
console.log("Hello master,here is your "+getMilk(5,1.5)+" change.");
*/
/*
function bmicalculator(weight,height)
{
var bmi=weight/(height^2);
return Math.round(bmi);
}
var bmi=bmicalculator(71.7,1.77);
console.log(bmi);*/
/* Math.floor() always reduce the value to the lowest, and Math.round() always checks the nearest one.*/
