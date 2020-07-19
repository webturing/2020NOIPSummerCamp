//
// Created by ceo on 2020/7/19.
//

#include<bits/stdc++.h>

using namespace std;
//选择排序：从无序区找一个最小值和无序区第一个元素置换
void select_sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        //a[0:i-1] is sorted
        //find min_elem a[k] in a[i,n-1]
        //swap(a[i],a[k])
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[k]) {
                k = j;
            }
        }
        if (k != i) {
            swap(a[i], a[k]);
        }
        copy(a, a + n, ostream_iterator<int>(cerr, " "));
        cerr << endl;
    }
}

int main() {
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    select_sort(a, 10);

    for (auto &e:a) {
        cout << e << " ";
    }
    return 0;
}