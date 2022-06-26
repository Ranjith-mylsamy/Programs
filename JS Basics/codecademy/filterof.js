const randomNumbers = [375, 200, 3.14, 7, 13, 852];

// Call .filter() on randomNumbers below

const smallNumbers=randomNumbers.filter(num=>
{return num < 250});
console.log(smallNumbers);

const favoriteWords = ['nostalgia', 'hyperbole', 'fervent', 'esoteric', 'serene'];
// Call .filter() on favoriteWords below
const longFavoriteWords=favoriteWords.filter(words=>
{
  return words.length>7
});
console.log(longFavoriteWords);
