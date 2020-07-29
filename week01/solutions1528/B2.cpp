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
        a.emplace_back(x);
        for (int i = n - 1; i >= 0 and a[i] > a[i + 1]; --i)
            swap(a[i], a[i + 1]);

        //       sort(a.begin(),a.end());
        copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }
    return 0;
}