Fix My Code Challenge

This repository contains fixes for several small coding tasks located in `challenge/`.

### Requirements
- OS: Ubuntu 20.04 LTS
- Allowed editors: `vi`, `vim`, `emacs`
- All files end with a new line
- Interpreters/compilers used:
  - Python 3
  - Node.js
  - Ruby
  - GCC with GNU89 standard for C

### Repository structure
- `challenge/0-fizzbuzz.py` — Print numbers 1..N with Fizz/Buzz/FizzBuzz rules
- `challenge/1-print_square.js` — Print an `N x N` square using `#`
- `challenge/2-sort.rb` — Print numeric CLI arguments sorted ascending (one per line)
- `challenge/3-user.py` — Simple `User` class with password hashing and validation
- `challenge/4-delete_dnodeint/` — Doubly linked list utilities and deletion by index in C

### Setup (Ubuntu 20.04)
Install required runtimes and toolchain:
```bash
sudo apt-get update
sudo apt-get install -y python3 nodejs ruby-full build-essential
```
Make scripts executable:
```bash
chmod +x challenge/0-fizzbuzz.py
chmod +x challenge/1-print_square.js
chmod +x challenge/3-user.py
```

### Usage
0) FizzBuzz (Python)
```bash
./challenge/0-fizzbuzz.py 50
# Output: numbers from 1 to 50 where:
#   multiples of 3 => Fizz
#   multiples of 5 => Buzz
#   multiples of 15 => FizzBuzz
```

1) Print square (JavaScript)
```bash
./challenge/1-print_square.js 4
#
####
####
####
####

./challenge/1-print_square.js 10
# prints exactly 10 lines of 10 '#'
```

2) Sort (Ruby)
```bash
ruby challenge/2-sort.rb 12 41 2 C 9 -9 31 fun -1 32
# Expected output:
# -9
# -1
# 2
# 9
# 12
# 31
# 32
# 41
```

3) User password (Python)
```bash
./challenge/3-user.py
# Runs internal assertions and exits silently on success
```

4) Doubly linked list delete by index (C)
```bash
cd challenge/4-delete_dnodeint
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 \
  main.c free_dlistint.c print_dlistint.c add_dnodeint_end.c delete_dnodeint_at_index.c \
  -o delete_dnodeint
./delete_dnodeint
```

### Notes
- All scripts and programs follow the constraints provided in the tasks.
- If running on a different OS, use a compatible toolchain matching Ubuntu 20.04 behavior.

