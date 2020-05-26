/*
var bestFood = 'pizza';
var firstName = 'Viraj\'s';
alert(firstName + ' ' + 'favorite Food' + ' ' + 'is' + ' ' + bestFood);
var favoriteFood = prompt('what is' + ' ' + firstName + ' ' + 'favorite food?');
console.log(firstName + ' ' + 'favorite food is' + ' ' + favoriteFood);


// basic operators

var myAge = 9;
var VirajAge = 1;
var whoIsOlder = myAge >= VirajAge;
console.log(whoIsOlder);
if (whoIsOlder === false){
    console.log('Viraj is older');
} else {
    console.log('Vivan is older');
}

var x ;
console.log(typeof x);



var VivanAge = 9;
var VirajAge = 9;


if (VirajAge < VivanAge) {
    console.log('Vivan is older.');
}      
else if (VirajAge = VivanAge) {
    console.log('Both are same age :)'); 
}

else{
    console.log('Viraj is older.');
}


var myFulAge = 12;
var name = 'Vivan';

if (myFulAge < 13) {
    console.log(name + ' is a child');
} else if (myFulAge >= 13 && myFulAge < 20) {
    console.log(name + ' is a teenager');
}  
else if (myFulAge >= 20 && myFulAge < 30) {
    console.log(name + ' is a young man');
}
else if (myFulAge >= 30 && myFulAge < 55) {
    console.log(name + ' is a man');
} else {
   console.log(name + ' is a old man');       
}

var JohnScoreGame_1 = 100;
var JohnScoreGame_2 = 120;
var JohnScoreGame_3 = 103;
var markScoreGame_1 = 116;
var markScoreGame_2 = 134;
var markScoreGame_3 = 123;

var average = (JohnScoreGame_1 + JohnScoreGame_2 + JohnScoreGame_3) / 3;

var Average = (markScoreGame_1 + markScoreGame_2 + markScoreGame_3) / 3;

if (average > Average) {
    console.log('John\'s basketball team won!!! (by the averege of ' + average + ' ppg)');
} else if (average < Average) {
   console.log('Mark\'s basketball team won!!! (by the averege of ' + Average + ' ppg)'); 
} else {
    console.log('There is a draw.')
}
*/
function yearsUntilRetirment(firstname, age)    {
    var yearsuntillretrirement = 65 - age;
    if (yearsuntillretrirement > 0)  {
       console.log(firstname + ' has ' + yearsuntillretrirement + ' years until retirment :)'); 
    } else {
        console.log(firstname + ' is alredy retired beacause he is ' + age + ' years old.');
    }
    return yearsuntillretrirement;
}

var retirment = yearsUntilRetirment('Vivan', 456);








    
    
    
    
    
    



















