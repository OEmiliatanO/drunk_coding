#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

std::array<std::size_t, 201> arr;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
        int x;
		std::cin >> x;
        ++arr[x+99];
	}
    
    int i = 0;
    while(arr[i] == 0) ++i;
    std::cout << i-99;
    --arr[i];
	for (; i < 200; ++i)
	{
        while (arr[i]--)
        {
            std::cout << ' ' << i-99;
        }
	}
    std::cout << '\n';
}