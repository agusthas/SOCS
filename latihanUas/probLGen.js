import {
  genRandArr,
  genIntInRange,
  shuffle,
  rangeGeneratorArr,
  getUnique,
} from '../gen.js';

function main(tc = 1) {
  /* Is multiple test case? */
  console.log(tc.toString());
  while (tc--) {
    let start, end;
    do {
      start = genIntInRange(1, 300);
      end = genIntInRange(10, 30001);
    } while (start > end);
    const step = genIntInRange(1, 15);
    const arr = shuffle(rangeGeneratorArr(start, end, step));
    console.log(arr.length);
    console.log(arr.join(' '));

    const numOfQuery = genIntInRange(2, 200);
    console.log(numOfQuery.toString());
    for (let i = 0; i < numOfQuery; i++) {
      const randStartQuery = genIntInRange(1, 200);
      const randEndQuery = genIntInRange(10, 400);
      console.log(`${randStartQuery} ${randEndQuery}`);
    }
  }
}

main(3);
