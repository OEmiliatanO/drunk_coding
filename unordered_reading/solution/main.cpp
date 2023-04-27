#include <iostream>
#include <algorithm>
#include <vector>

constexpr int MAXN = 100000000;

std::vector<int> arr;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::size_t n;
	std::cin >> n;
	arr.resize(n);
	for (std::size_t i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}

	std::sort(arr.begin(), arr.end());
	for (std::size_t i = 0; i < n; ++i)
	{
		std::cout << arr[i] << " \n"[i==n-1];
	}
}
