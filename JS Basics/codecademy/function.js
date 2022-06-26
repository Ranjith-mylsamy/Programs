const walkthrough = (num1,num2) => sumnum=num1+num2;
walkthrough(1,2);
console.log(sumnum);
//scope
//program 1
var satellite='The Moon';
var galaxy='The Milky Way';
var stars='North Star';
const callMyNightSky=()=>{
  return 'Night Sky: ' + satellite + ', '+ stars + ', and ' + galaxy;
};
console.log(callMyNightSky()); // global
//program 2
const city='New York City';
const logCitySkyline = function()
{
  let skyscraper='Empire State Building'
  return 'The stars over the ' + skyscraper + ' in ' + city;
};
console.log(logCitySkyline());//local
//progam 3
const logVisibleLightWaves=()=>
{
  const lightWaves='Moonlight';
  console.log(lightWaves);
};
logVisibleLightWaves();
//console.log(lightWaves);
//scope within the block
//last line leads to reference error