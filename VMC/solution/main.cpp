#include <iostream>
#include <algorithm>
#include <vector>

std::vector<long long> arr;

int main()
{
	//std::ios_base::sync_with_stdio(false);
	//std::cin.tie(nullptr);
	std::size_t t;
	scanf("%lu", &t);
    while (t--)
    {
        std::size_t n;
        std::cin >> n;
        arr.resize(n);
        long long s = 0;
        for (std::size_t i = 0; i < n; ++i)
        {
			scanf("%lld", &arr[i]);
            s += arr[i];
        }
        double mid = (double)s/n;
        double ans = 0;
        for (std::size_t i = 0; i < n; ++i)
        {
            ans += std::abs(arr[i]-mid);
        }
        //std::cout << mid << " " << ans << '\n';
		printf("%.5f %.5f\n", mid, ans);
    }
}
