#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

constexpr int MAXN = 100000;

std::array<unsigned long long, MAXN> coins;
std::array<unsigned long long, MAXN> ans;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::size_t n;
	std::cin >> n;
	for (std::size_t i = 0; i < n; ++i) std::cin >> coins[i];
	std::size_t m;
	std::cin >> m;
	for (std::size_t _ = 0; _ < m; ++_)
	{
		std::fill(ans.begin(), ans.end(), 0);
		ans[0] = 1;
		unsigned long long k;
		std::cin >> k;
		for (std::size_t i = 0; i < n; ++i)
			for (auto j = coins[i]; j <= k; ++j)
				ans[j] += ans[j - coins[i]];
		std::cout << ans[k] << '\n';
	}
}
