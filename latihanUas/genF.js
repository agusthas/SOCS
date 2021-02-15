const gen = require('../generator.js');

function main() {
  let len = gen.randomIntegerInRange(50, 100);
  let maxWeight = gen.randomIntegerInRange(2, 100);
  let arr = gen
    .randomIntArrayInRange(1, 100, len)
    .sort((a, b) => a - b)
    .join(' ');
  console.log(`${len} ${maxWeight}`);
  console.log(arr);
}

main();
