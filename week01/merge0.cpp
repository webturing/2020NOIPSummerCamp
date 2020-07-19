//
// Created by ceo on 2020/7/19.
//

#include<bits/stdc++.h>

using namespace std;


int main() {
    int a[5] = {1, 3, 5, 7, 9};
    int b[5] = {2, 5, 7, 18, 19};
    int c[10];
    //合并两个有序列表 O(n+m)
    int i = 0, j = 0, k = 0, la = 5, lb = 5;
    while (i < la && j < lb) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < la)c[k++] = a[i++];
    while (j < lb)c[k++] = b[j++];

    for (i = 0; i < 10; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}