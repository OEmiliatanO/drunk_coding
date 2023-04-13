import sys
import random

t = int(sys.argv[1])
maxn = int(sys.argv[2])
range_ = int(sys.argv[3])
print(t)

for _ in range(t):
    n = random.randint(1, maxn)
    print(n, end = " ")
    for __ in range(n):
        print(random.randint(-range_, range_), end = " ")
    print()
