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
    size_t n = read();
    vector<string> s(n);
    for (auto &e:s)cin >> e;
    sort(s.begin(), s.end(), [](const string &a, const string &b) {
        return a + b < b + a;
    });
    string t;
    for (auto &e:s)t += e;
    auto pos = find_if(t.begin(), t.end(), [](char c) {
        return c != '0';
    });
    cout << t.substr(pos-t.begin());
    return 0;
}