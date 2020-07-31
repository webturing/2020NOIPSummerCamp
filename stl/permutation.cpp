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

template<typename T=int>
void disp(T *a, T *b) {
    copy(a, b, ostream_iterator<T>(cout, " "));
    cout << endl;
}

template<typename T=int>
inline void disp(const T &coll, const char *optcstr = "") {
    typename T::const_iterator pos;

    cout << optcstr;
    for (pos = coll.begin(); pos != coll.end(); ++pos) {
        cout << *pos << ' ';
    }
    cout << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a[] = {4, 3, 2, 1};
    do {
        disp(a, a + 4);
    } while (prev_permutation(a, a + 4));
    double b[] = {1.2, 3.4};
    disp<double>(b, b + 2);
    vector<int> v = {2, 3};
    disp(v);

    return 0;
}