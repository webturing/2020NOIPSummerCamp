#include<iostream>

using namespace std;
typedef long long LL;
const int MAXN = 1e6 + 10;
int a[MAXN];
int b[MAXN];
int n;
LL res = 0;

void Count() {
}

void mer(int l, int r) {
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mer(l, mid);
    mer(mid + 1, r);
    int x = l;
    int p1 = l;
    int p2 = mid + 1;
    while (p1 <= mid && p2 <= r) {
        if (a[p1] == a[p2]) {
            b[x++] = a[p2++];
        } else if (a[p1] > a[p2]) {
            res += r - p2 + 1;
            b[x++] = a[p1++];
        } else {
            b[x++] = a[p2++];
        }
    }
    while (p1 <= mid) {
        b[x++] = a[p1++];
    }
    while (p2 <= r) {
        b[x++] = a[p2++];
    }
    for (int i = l; i <= r; i++)
        a[i] = b[i];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        res = 0;
        mer(1, n);
        cout << res << endl;
    }
    return 0;
}