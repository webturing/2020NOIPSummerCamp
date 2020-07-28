#include<bits/stdc++.h>

using namespace std;
using ll=long long;
#define endl  '\n'


int a[100000], b[100000];
int n;
int tot = 0;

void merge_sort(int *a, int left, int right) {
    if (left >= right)return;
    int mid = (left + right) / 2;
    merge_sort(a, left, mid);
    merge_sort(a, mid + 1, right);
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        ++tot;
        if (a[i] <= a[j]) {
            b[k++] = a[i++];

        } else {
            b[k++] = a[j++];
        }
    }
    while (i <= mid) {
        ++tot;
        b[k++] = a[i++];
    }
    while (j <= right) {
        ++tot;
        b[k++] = a[j++];
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;

    for (int i = 0; i < n; i++)cin >> a[i];
    merge_sort(a, 0, n - 1);
    copy(a, a + n, ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << tot << endl;

    return 0;
}

