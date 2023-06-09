#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <limits>

constexpr int MAXN = 100000;
using edge_t = std::pair<double, std::size_t>;
std::vector<edge_t> G[MAXN + 1];

std::array<bool, MAXN + 1> reachable;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
    std::size_t n, s, t;
    std::cin >> n >> s >> t;
    for (std::size_t i = 1; i <= n; ++i)
    {
        std::size_t m;
        std::cin >> m;
        for (std::size_t j = 0; j < m; ++j)
        {
            std::size_t v;
            long long w;
            std::cin >> v >> w;
            G[i].emplace_back(w, v);
        }
    }
    std::size_t l;
    std::cin >> l;
    for (std::size_t i = 0; i < l; ++i)
    {
        std::size_t u, v;
        std::cin >> u >> v;
        for (auto& e : G[u])
            if (e.second == v)
            {
                e.first *= 1.35;
                break;
            }
    }

    std::fill(reachable.begin(), reachable.begin() + n + 1, false);
    std::queue<std::size_t> qu;
    qu.emplace(s);
    
    while (qu.size())
    {
        std::size_t now = qu.front(); qu.pop();
        reachable[now] = true;
        for (auto& nexe : G[now])
        {
            std::size_t nex = nexe.second;
            if (!reachable[nex])
                qu.emplace(nex);
        }
    }
    std::cout << reachable[t] << '\n';
}
