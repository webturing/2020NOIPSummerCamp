#include<bits/stdc++.h>

using namespace std;
using ll=long long;
using Fractor=pair<ll, ll>;


void simplify(Fractor &f) {
    ll g = __gcd(f.first, f.second);
    f.first /= g;
    f.second /= g;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    size_t n;
    cin >> n;
    vector<Fractor> F(n);
    for (auto &f:F) {
        string s;
        cin >> s;
        s[s.find('/')] = ' ';
        istringstream iss(s);
        iss >> f.first >> f.second;
        simplify(f);
    }
    sort(F.begin(), F.end(), [](const Fractor &a, const Fractor &b) -> bool {
        return a.first * b.second < a.second * b.first;
    });
    for (const auto &f:F) {
        cout << f.first << "/" << f.second << endl;
    }
    return 0;
}