#!/usr/bin/env python3
import sys


def fizzbuzz(n):
    output = []
    for value in range(1, n + 1):
        token = ""
        if value % 3 == 0:
            token += "Fizz"
        if value % 5 == 0:
            token += "Buzz"
        if not token:
            token = str(value)
        output.append(token)
    return output


def main():
    if len(sys.argv) < 2:
        print(" ".join(fizzbuzz(100)))
        return
    try:
        limit = int(sys.argv[1])
    except ValueError:
        sys.exit(1)
    print(" ".join(fizzbuzz(limit)))


if __name__ == "__main__":
    main()


