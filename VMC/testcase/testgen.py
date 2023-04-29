import sys
import random

t = int(sys.argv[1])
maxn = int(sys.argv[2])
range_ = int(sys.argv[3])
print(t)

for _ in range(t):
    n = random.randint(1, maxn)
    print(n, end = " ")
    arr = [random.randint(-range_, range_) for __ in range(n)]
    arr.sort()
    print(*arr, sep = ' ')
