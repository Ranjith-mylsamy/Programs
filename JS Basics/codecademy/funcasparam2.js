const addTwo = num => {
    return num + 2;
  }
  
  const checkConsistentOutput = (func, val) => {
  var checkA=val+2;
  var checkB=func(val);
  if(checkA===checkB)
  {
    return func(val);
  }
  else
  {
    return 'inconsistent results'
  }
  }
  
  console.log(checkConsistentOutput(addTwo,4));