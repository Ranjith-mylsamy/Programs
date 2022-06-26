const higherOrderFunc = param => {
    param();
    console.log(param());
    return `I just invoked ${param.name} as a callback function!`
  }
   
  const anotherFunc = () => {
    return 'I\'m being invoked by the higher-order function!';
  }
   
  higherOrderFunc(anotherFunc);