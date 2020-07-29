#include<bits/stdc++.h>

using namespace std;
using ll=long long;
const int maxn = 1000000 + 10;
ll F[maxn];

ll f(int x) {
    if (F[x])return F[x];
    if (x == 1 || x == 2 || x == 4 || x == 5 || x == 10)return F[x] = 1;
    ll best = x;
    if (x > 10) {
        best = min(f(x - 10) + 1, best);
    }
    if (x > 5) {
        best = min(f(x - 5) + 1, best);
    }
    if (x > 4) {
        best = min(f(x - 4) + 1, best);
    }
    if (x > 2) {
        best = min(f(x - 2) + 1, best);
    }
    if (x > 1) {
        best = min(f(x - 1) + 1, best);
    }
    return F[x] = best;


}

int main() {
    int n;
    cin >> n;
    cout << f(n);

    return 0;
}