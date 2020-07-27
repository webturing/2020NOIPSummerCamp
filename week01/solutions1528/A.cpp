#include<bits/stdc++.h>

using namespace std;
using ll=long long;
#define endl  '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        vector<int> a(9);
        for (int &e:a)cin >> e;
        copy_if(a.rbegin(), a.rend(), ostream_iterator<int>(cout, " "), [a](int x) { return x < a[0]; });
        copy_if(a.begin(), a.end(), ostream_iterator<int>(cout, " "), [a](int x) { return x == a[0]; });
        copy_if(a.begin(), a.end(), ostream_iterator<int>(cout, " "), [a](int x) { return x > a[0]; });
        cout << endl;
    }
    return 0;
}