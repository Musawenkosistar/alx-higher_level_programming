#!/usr/bin/node
function factorial (k) {
  if (k < 0) {
    return (-1);
  }
  if (k === 0 || isNaN(k)) {
    return (1);
  }
  return (k * factorial(k - 1));
}

console.log(factorial(Number(process.argv[2])));
