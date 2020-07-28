#include<bits/stdc++.h>

using namespace std;
using ll=long long;
#define endl  '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    size_t n;
    cin >> n;
    vector<int> a(n);
    for (int &e:a)cin >> e;
    for (int i = 0; i < n; i++) {
        int k = min_element(a.begin() + i, a.end()) - a.begin();
        cout << "swap(a[" << i << "], a[" << k << "]):";
        swap(a[i], a[k]);
        copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }

    return 0;
}