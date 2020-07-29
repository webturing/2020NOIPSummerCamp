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

const ll MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n = read();
    vector<vector<ll>> f(n+1, vector<ll>(2, 0));
    f[1][0] = 1;
    f[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i][0] = (f[i - 1][0] + f[i - 1][1]) % MOD;
        f[i][1] = f[i - 1][0];
    }
    cout << (f[n][0] + f[n][1]) % MOD << endl;
    return 0;
}