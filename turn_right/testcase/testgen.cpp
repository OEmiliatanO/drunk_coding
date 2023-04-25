#include <iostream>
#include <random>
#include <algorithm>
#include <vector>
constexpr std::size_t MAXN = 10000;

int main(int argc, char **argv)
{
    std::random_device rd;
    std::default_random_engine gen(rd());
    std::size_t n = std::atoi(argv[1]), s = std::atoi(argv[2]), t = std::atoi(argv[3]);
    std::size_t m = std::atoi(argv[4]);
    std::size_t l = std::atoi(argv[5]);
    std::size_t wmin = std::atoi(argv[6]), wmax = std::atoi(argv[7]);
	std::uniform_int_distribution<int> uniint(1, n);
    std::uniform_int_distribution<int> weight(wmin, wmax);
    bool mustconnect = (bool)std::atoi(argv[8]);
    std::vector<std::pair<std::size_t, std::size_t>> cand;
    std::vector<std::vector<bool>> mat;
    mat.resize(n+1);
    for (auto& it : mat)
        it.resize(n+1);

    std::cout << n << ' ' << s << ' ' << t << '\n';
    for (std::size_t i = 0; i < m; ++i)
    {
        std::size_t v = uniint(gen), u = uniint(gen);
        mat[v][u] = true;
    }
    if (mustconnect)
    {
        std::vector<std::size_t> vec;
        for (std::size_t i = 1; i <= n; ++i)
            if (i != s && i != t) vec.emplace_back(i);
        std::shuffle(vec.begin(), vec.end(), gen);
        std::size_t nmid = uniint(gen) % vec.size();
        mat[s][vec[0]] = true;
        for (std::size_t i = 0; i < nmid-1; ++i)
            mat[vec[i]][vec[i+1]] = true;
        mat[vec[nmid - 1]][t] = true;
    }
    for (std::size_t i = 1; i <= n; ++i)
    {
        std::size_t mi = 0;
        for (std::size_t j = 1; j <= n; ++j)
            mi += mat[i][j];
        std::cout << mi;
        for (std::size_t j = 1; j <= n; ++j)
            if (mat[i][j])
            {
                std::cout << ' ' << j << ' ' << weight(gen);
                cand.emplace_back(i, j);
            }
        std::cout << '\n';
    }

    std::cout << l << '\n';
    for (std::size_t i = 0; i < l; ++i)
        std::cout << cand[i].first << " " << cand[i].second << '\n';

    return 0;
}
