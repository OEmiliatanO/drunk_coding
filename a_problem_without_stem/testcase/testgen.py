import sys
import random
n = int(sys.argv[1])
print(n)
print(" ".join([str(random.randint(1, 10000)) for _ in range(n)]))
m = int(sys.argv[2])
print(m)
print(" ".join([str(random.randint(1, 10000)) for _ in range(m)]))
