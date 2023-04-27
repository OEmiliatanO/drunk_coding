import sys
import random
n = int(sys.argv[1])
m = int(sys.argv[2])
maxk = int(sys.argv[3])
print(n)
print(" ".join([str(random.randint(1, maxk//1.5)) for _ in range(n)]))
print(m)
print("\n".join([str(random.randint(1, maxk)) for _ in range(m)]))
