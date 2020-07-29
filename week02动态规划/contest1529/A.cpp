#include<bits/stdc++.h>

using namespace std;

using ll=long long;
#define endl '\n'
#define FOR(i, x, y) for (decay<decltype(y)>::type i = (x), _##i = (y); i < _##i; ++i)
#define FORD(i, x, y) for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)

template<typename T=int>
inline T read() {
    T x;
    cin >> x;
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, C;
    cin >> n >> C;
    vector<pair<int, int>> G(n);
    for (int i = 0; i < n; i++)
        cin >> G[i].first;
    for (int i = 0; i < n; i++)
        cin >> G[i].second;
    int maxV = 0;
    for (int i = 0; i < (1 << n); i++) {
        int curV = 0, curC = 0;
        for (int j = n - 1; j >= 0; j--) {
            if ((i >> j) & 1) {
                if (curC + G[j].first > C)continue;
                curC += G[j].first;
                curV += G[j].second;
            }
        }
        maxV = max(maxV, curV);
    }
    cout << maxV << endl;
    return 0;
}