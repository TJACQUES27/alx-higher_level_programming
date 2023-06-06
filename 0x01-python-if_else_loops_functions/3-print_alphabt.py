#!/usr/bin/python3
for letter in range(97, 123):
    if chr(letter) != 'x' and chr(letter) != 'y':
        print("{}".format(chr(letter)), end="")
