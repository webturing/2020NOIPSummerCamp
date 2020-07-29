#include<bits/stdc++.h>

using namespace std;

bool cmp(const string &a, const string &b) {
    string sa = a.substr(6, 8);
    string sb = b.substr(6, 8);
    return sb < sa;
}

int main() {
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}