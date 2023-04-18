#include <string>
#include <iostream>

std::string s;

int main()
{
	std::size_t n;
	std::cin >> n;
	std::cin >> s;
	long long cnt = 0;
	for (std::size_t i = 0; i < n-2; ++i)
		if (s[i] == 'M' && s[i+1] == 'F' && s[i+2] == 'M') ++cnt;
	std::cout << cnt*2 << " " << cnt << '\n';
}
