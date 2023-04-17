#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int a0, da, b0, db;
	std::size_t t;
	//std::cin >> t;
	scanf("%lu", &t);
	while (t--)
	{
		//std::cin >> a0 >> da >> b0 >> db;
		scanf("%d %d %d %d", &a0, &da, &b0, &db);
		if ((da > 0 && db > 0) || (da < 0 && db < 0))
			//std::cout << "inf\n";
			printf("inf\n");
		else
		{
			auto f = [&](int i) { return (double)0.03*(a0+i*da)*(b0+i*db); };
			int argmax = -(a0*db+b0*da)/(2*da*db);
			//std::cout << f(argmax) << ' ' << argmax << '\n';
			printf("%.0f %d\n", f(argmax), argmax);
		}
	}
}
