#include <iostream>
#include <random>

int main(int argc, char **argv)
{
	std::random_device rd;
	std::default_random_engine gen(rd());

	std::size_t n = 10;
	int mini = 0, maxi = 100;
	if (argc >= 2) n = std::atoi(argv[1]);
	if (argc >= 3) mini = std::atoi(argv[2]);
	if (argc >= 4) maxi = std::atoi(argv[3]);
	std::uniform_int_distribution<int> uniint(mini, maxi);
	std::cout << n << '\n';
	for (size_t i = 0; i < n; ++i)
		std::cout << uniint(gen) << " \n"[i == n-1];

	return 0;
}
