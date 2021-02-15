const gen = require('../generator');

function main() {
  let N = gen.randomIntegerInRange(1, 1000);
  let Q = gen.randomIntegerInRange(1, 1000);
  let arr = gen.randomIntArrayInRange(1, 1000, N).sort((a, b) => a - b);
  console.log(`${N} ${Q}`);
  console.log(arr.join(' '));
  for (let i = 0; i < Q; i++) {
    let randomQuery = gen.randomIntegerInRange(1, 150);
    console.log(randomQuery);
  }
}

main();
