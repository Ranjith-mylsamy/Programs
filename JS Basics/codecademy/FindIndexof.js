const animals = ['hippo', 'tiger', 'lion', 'seal', 'cheetah', 'monkey', 'salamander', 'elephant'];
const foundAnimal=animals.findIndex(char=>
{
  return char==='elephant';
});
const startsWithS=animals.findIndex(CharS=>
{
  const filter = animals.filter(chars=>
  {
   return chars[0]==='s';
   });
   console.log(filter);
   console.log(filter[0]);
   return filter;
});
console.log(startsWithS);

/*const animals = ['hippo', 'tiger', 'lion', 'seal', 'cheetah', 'monkey', 'salamander', 'elephant'];
const foundAnimal=animals.findIndex(char=>
{
  return char==='elephant';
});
const startsWithS=animals.findIndex(CharS=>
{
  return CharS[0]==='s';
});
console.log(startsWithS);
console.log(foundAnimal);*/