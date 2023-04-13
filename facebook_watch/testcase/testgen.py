import random
import sys

n = int(sys.argv[1])
m = int(sys.argv[2])

for x in random.sample([i+1 for i in range(n)], m):
    print(x, end=" ")
print()
