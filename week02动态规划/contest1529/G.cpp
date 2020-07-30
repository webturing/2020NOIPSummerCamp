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

int dp[20002];
#define MIN 99999
map<int, int> cn;//coin and number
int n, m;

int solve(int m) {
    if (dp[m] != 0)
        return dp[m];
    if (m == 0)
        return dp[m] = 0;
    for (auto &i:cn) {
        if (m == i.first && i.second) {
            i.second--;
            return dp[m] = 1;
        }
    }
    int min = MIN, cur = MIN;
    for (auto &i :cn) {
        if (i.second > 0 && i.first < m) {
            i.second--;
            cur = solve(m - i.first) + 1;
            i.second++;
        }
        if (min > cur)
            min = cur;
    }
    return dp[m] = min;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    int k, v;
    for (int i = 0; i < n; i++) {
        cin >> k >> v;
        cn[k] = v;
    }
    cin >> m;
    int x = solve(m);
    if (x <= m)
        cout << x << endl;
    else cout << "-1" << endl;
    return 0;
}