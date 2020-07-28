#include<bits/stdc++.h>

using namespace std;
using ll=long long;
#define endl  '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int n, x; cin >> n >> x;) {
        if (n == 0 and x == 0)break;
        vector<int> a(n);
        for (auto &e:a)cin >> e;
        auto pos = lower_bound(a.begin(), a.end(), a.back());
        a.insert(pos, x);
        copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }
    return 0;
}