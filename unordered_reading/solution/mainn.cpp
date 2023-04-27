#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

std::array<std::size_t, 201> arr;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::size_t n;
	std::cin >> n;
	for (std::size_t i = 0; i < n; ++i)
	{
		std::cin >> x;
        ++arr[x+99];
	}

	for (std::size_t i = 0; i < 190; ++i)
	{
        while (arr[i]--)
        {
            std::cout << i-99 << ' ';
        }
	}
    std::cout << '\n';
}
