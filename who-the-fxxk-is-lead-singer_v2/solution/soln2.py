nmap = int(input())
mmap = {}
for i in range(nmap):
    temp = input().split()
    mmap[temp[0]]=temp[1]


if_circle = []
for i in mmap.keys():
    if_circle.clear()
    while(mmap[i] in mmap):
        if(i in if_circle):
            for j in if_circle:
                mmap[j] = -1
            mmap[i] = -1
            break
        
        if_circle.append(i)
        mmap[i] = mmap[mmap[i]]

input()
nstr = int(input())
for i in range(nstr):
    inp = input().split()
    ans = ""
    for j in inp:
        if(j in mmap):
            if(mmap[j] == -1):
                ans = "Guitar! "
                break
            else:
                ans += mmap[j]
                ans += " "
        else:
            ans += j
            ans += " "
    print(ans[:-1])

