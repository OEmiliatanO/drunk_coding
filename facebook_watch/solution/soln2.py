def sol(n, goal):
    if goal < 0: return -1
    for j in range(1,n):
        target = 0
        for i in range(2,n):
            target = (target+j)%i
        if target == goal:
            return j
    return -1

que = list(map(int, input().strip().split()))
ind = que.index(max(que))
print(sol(len(que), ind-1))
