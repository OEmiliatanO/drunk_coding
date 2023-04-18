def f(n, k):
    if k == 1: return n-1
    ans = 0
    i = 2
    while i <= n:
        if ans + k >= i:
            ans = (ans + k) % i
            i += 1
            continue
        step = (i - 1 - ans - 1) // (k - 1)
        if i + step > n:
            ans += (n - (i-1)) * k
            break
        i += step
        ans += step * k
    return ans

def sol(n, goal):
    if goal < 0: return -1
    for j in range(1, n):
        if f(n, j) == goal:
            return j
    return -1

que = list(map(int, input().strip().split()))
ind = que.index(max(que))
print(sol(len(que)-1, ind-1))
