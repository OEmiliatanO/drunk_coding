import sys
import random
import time
t = int(sys.argv[1])

damin = int(sys.argv[2])
damax = int(sys.argv[3])

dbmin = int(sys.argv[4])
dbmax = int(sys.argv[5])

print(t)
random.seed(time.time())
for _ in range(t):
    a0 = random.randint(1, 200)
    da = random.randint(damin, damax)
    b0 = random.randint(1, 200)
    db = random.randint(dbmin, dbmax)
    print(" ".join([str(a0), str(da), str(b0), str(db)]))
