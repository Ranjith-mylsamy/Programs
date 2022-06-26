let raceNumber = Math.floor(Math.random() * 1000);
const runnerregister = true;
const age=21;
if (age>18 && runnerregister==true)
{
  raceNumber+=1000;
}
if(age>18 && runnerregister==true)
{
  console.log(`${raceNumber} Race begings at 9:30 AM`);
}
else if(age>18 && runnerregister==false)
{
  console.log(`${raceNumber} Race begings at 11:00 AM`);
}
else if(age<18)
{
  console.log(`${raceNumber} Race begings at 12:30PM`);
}
else
{
  console.log(`please see the registration desk`);
}