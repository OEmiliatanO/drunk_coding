#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	long long a0, da, b0, db;
	std::size_t t;
	//std::cin >> t;
	scanf("%lu", &t);
	while (t--)
	{
		//std::cin >> a0 >> da >> b0 >> db;
		scanf("%lld %lld %lld %lld", &a0, &da, &b0, &db);
		if (da == 0 && db == 0)
		{
			printf("%.0f %lld\n", (double)0.03*a0*b0, 0LL);
			continue;
		}
		if ((da >= 0 && db >= 0) || (da <= 0 && db <= 0))
		{
			//std::cout << "inf\n";
			printf("inf\n");
			continue;
		}
		
		auto f = [&](long long i) { return (double)0.03*(a0+i*da)*(b0+i*db); };
		long long argmax = -(a0*db+b0*da)/(2*da*db);
		//std::cout << f(argmax) << ' ' << argmax << '\n';
		if (f(argmax) > f(argmax+1))
			printf("%.0f %lld\n", f(argmax), argmax);
		else
			printf("%.0f %lld\n", f(argmax+1), argmax+1);
	}
}
