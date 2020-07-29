#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1000000 + 10;
int Left[MAXN / 2], Right[MAXN / 2], a[MAXN];
int n;
long long sum = 0;

void Megre(int p, int q, int r) {
    int w;
    for (int i = p, w = 1; i <= q; i++)
        Left[w++] = a[i];
    for (int i = q + 1, w = 1; i <= r; i++)
        Right[w++] = a[i];
    int i = 1, j = 1;
    w = p;
    while (w <= r) {
        if (j > r - q || i <= q - p + 1 && Left[i] <= Right[j]) {
            a[w] = Left[i];
            i++;
            sum += j - 1;
        } else {
            a[w] = Right[j];
            j++;
            //sum += i-1;
        }
        w++;
    }
}

void Megre_sort(int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        Megre_sort(p, q);
        Megre_sort(q + 1, r);
        Megre(p, q, r);
        /*
        cout << p << ' ' << r << ':' << endl;
        cout << sum << endl;
         */
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sum = 0;
        Megre_sort(1, n);
        cout << sum << endl;
    }

    return 0;
}
