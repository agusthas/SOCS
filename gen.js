export function genRandArr(min, max, len = 1) {
  return Array.from(
    { length: len },
    () => Math.floor(Math.random() * (max - min + 1)) + min
  );
}

export const rangeGeneratorArr = function (start, end, step = 1) {
  let arr = [];
  for (let i = start; i < end; i += step) {
    arr.push(i);
  }

  return arr;
};

export const genIntInRange = (min, max) =>
  Math.floor(Math.random() * (max - min + 1) + min);

// Use shuffle + rangeGenerator to generate random number in range non repeated
//  => shuffle([...rangeGenerator(start, end, step)]);
export const shuffle = ([...arr]) => {
  let m = arr.length;
  while (m) {
    const i = Math.floor(Math.random() * m--);
    [arr[m], arr[i]] = [arr[i], arr[m]];
  }
  return arr;
};

export const getUnique = (arr) => [...new Set(arr)];
