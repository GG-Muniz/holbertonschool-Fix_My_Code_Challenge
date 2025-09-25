#!/usr/bin/env python3
import sys


def main():
    try:
        limit = int(sys.argv[1]) if len(sys.argv) > 1 else 100
    except (ValueError, TypeError):
        sys.exit(1)

    for i in range(1, limit + 1):
        if i % 15 == 0:
            token = "FizzBuzz"
        elif i % 3 == 0:
            token = "Fizz"
        elif i % 5 == 0:
            token = "Buzz"
        else:
            token = str(i)
        end_char = "\n" if i == limit else " "
        print(token, end=end_char)


if __name__ == "__main__":
    main()
