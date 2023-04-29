#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <limits>
#include <array>

constexpr int MAXN = 100000;
using edge_t = std::pair<double, std::size_t>;
std::vector<edge_t> G[MAXN + 1];

std::array<double, MAXN + 1> dis;

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

    std::fill(dis.begin(), dis.begin() + n + 1, std::numeric_limits<double>::max());
    dis[s] = 0;
    std::priority_queue<edge_t, std::vector<edge_t>, std::greater<edge_t>> pq;
    pq.emplace(0.0, s);

    while (pq.size())
    {
        edge_t _ = pq.top(); pq.pop();
        size_t now = _.second;
        for (auto& nexe : G[now])
        {
            auto nex = nexe.second;
            auto w = nexe.first;
            if (dis[nex] > dis[now] + w)
            {
                dis[nex] = dis[now] + w;
                pq.push(edge_t{dis[nex], nex});
            }
        }
    }
    std::cout << (dis[t] == std::numeric_limits<double>::max() ? -1 : dis[t]) << '\n';
}
