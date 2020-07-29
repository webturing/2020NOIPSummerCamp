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
    vector<ll> F(51);
    F[1] = F[2] = 1;
    for (int i = 3; i < F.size(); i++)F[i] = F[i - 1] + F[i - 2];
    cout << F[read()] << endl;
    return 0;
}