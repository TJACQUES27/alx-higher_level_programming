#!/usr/bin/python3
import random
number = random.randint(-10, 10)
if number > 0:
    print(f"{number:w} is positive")
elif number == 0:
    print(f"{number:w} is zero")
else:
    print(f"{number:w} is negative")
