#!/usr/bin/env node

const arg = process.argv[2];
const size = Number(arg);

if (!Number.isInteger(size) || size < 0) {
  process.exit(1);
}

const line = '#'.repeat(size);
for (let i = 0; i < size; i += 1) {
  console.log(line);
}


