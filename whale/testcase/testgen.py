import sys
import random

s = ["M", "F"]
n = int(sys.argv[1])
print(n)
for i in range(n):
    print(random.choice(s), end="")
print()
