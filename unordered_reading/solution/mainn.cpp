#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#pragma GCC optimize("Ofast")

std::array<std::size_t, 201> arr;

int main()
{
	//std::ios_base::sync_with_stdio(false);
	//std::cin.tie(nullptr);

	int n;
	//std::cin >> n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
        int x;
		//std::cin >> x;
		scanf("%d", &x);
        ++arr[x+99];
	}
    
	for (int i = 0; i < 200; ++i)
	{
        while (arr[i]--)
        {
            //std::cout << i-99 << ' ';
			printf("%d ", i-99);
        }
	}
	printf("\n");
    //std::cout << '\n';
}
