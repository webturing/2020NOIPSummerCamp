#include<bits/stdc++.h>

using namespace std;
using ll=long long;
#define endl  '\n'


int a[100000];
int n;

void qsort(int *a, int left, int right) {
    if (left >= right)return;
    int p = left, i = left, j = right;
    while (i < j) {
        while (j > i && j >= left && a[j] >= a[p])j--;
        while (j > i && i <= right && a[i] <= a[p])i++;
        if (i >= j)break;
        swap(a[i], a[j]);
    }
    swap(a[left], a[i]);
    p = i;
    qsort(a, left, p - 1);
    qsort(a, p + 1, right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;

    for (int i = 0; i < n; i++)cin >> a[i];
    qsort(a, 0, n - 1);
    copy(a, a + n, ostream_iterator<int>(cout, " "));
    cout << endl;


    return 0;
}

