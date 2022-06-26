var bobsFollowers=['Sudhikshan','Mithun','Akilan','Vishnu'];
var tinasFollowers=['Sudhikshan','Mithun','Ranjith'];
var mutualFollowers=[];
for(let i=0;i<bobsFollowers.length;i++){
for(let j=0;j<tinasFollowers.length;j++)
{
  if(bobsFollowers[i]===tinasFollowers[j])
  {
  mutualFollowers.push(bobsFollowers[i]);
  console.log(mutualFollowers[i]);
  }
}
}