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
    for (int T = read(); T--;) {
        int n = read();
        vector<int> a(n);
        for (auto &e:a)cin >> e;
        vector<int> dp(n, 0);
        dp[0] = max(a[0], 0);
        for (int i = 1; i < n; i++) {
            dp[i] = max(dp[i - 1] + a[i], a[i]);
        }
        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}