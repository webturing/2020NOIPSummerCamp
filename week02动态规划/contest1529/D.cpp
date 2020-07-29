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

vector<ll> a;
int n;

bool dfs(int i, ll target) {
    //cerr << "dfs(" << i << "," << target << ") called" << endl;
    if (i == n) {
        return target == 0;
    }
    return dfs(i + 1, target - a[i]) || dfs(i + 1, target);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    for (; cin >> n;) {
        a.resize(n);
        for (auto &e:a)cin >> e;
        ll sum = accumulate(a.begin(), a.end(), 0ll);

        if ((sum & 1) == 0 && dfs(0, sum >> 1)) cout << "Of course,I can!" << endl;
        else cout << "Sorry,I can't!" << endl;
    }
    return 0;
}