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

double Distance(tuple<int, int, int> &x, tuple<int, int, int> &y) {
    double dx = get<0>(x) - get<0>(y);
    double dy = get<1>(x) - get<1>(y);
    double dz = get<2>(x) - get<2>(y);
    int a, b, c;
    tie(a, b, c) = y;
    tie(ignore, b, c) = y;
    return sqrt(dx * dx + dy * dy + dz * dz);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    tuple<int, int, int> x, y;
    get<0>(x) = 1;
    get<1>(x) = 2;
    get<2>(x) = 3;
    y = make_tuple(5, 6, 7);

    cin >> get<0>(x) >> get<1>(x) >> get<2>(x);
    cout << Distance(x, y) << endl;
    return 0;
}