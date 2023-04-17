import sys
import random
import time
t = int(sys.argv[1])
print(t)
random.seed(time.time())
for _ in range(t):
    a0 = random.randint(0, 200)
    da = random.randint(-200, 200)
    b0 = random.randint(0, 200)
    db = random.randint(-200, 200)
    print(" ".join([str(a0), str(da), str(b0), str(db)]))
