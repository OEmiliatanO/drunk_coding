#include <iostream>
#include <algorithm>

constexpr std::size_t MAXN = 20000;

int arr[MAXN];

int sol(int n, int goal)
{
    if (goal < 0) return -1;
    for (int j = 1; j < n; ++j)
    {
        int target = 0;
        for (int i = 2; i < n; ++i)
            target = (target+j)%i;
        if (target == goal)
            return j;
    }
    return -1;
}

int main()
{
    std::size_t i = 0;
    std::pair<int, size_t> pos{-1000000, -1};
    while(~scanf("%d", &arr[i]))
    {
        pos = std::max(std::make_pair(arr[i], i), pos);
        i++;
    }
    printf("%d", sol(i, pos.second-1));
    return 0;
}
