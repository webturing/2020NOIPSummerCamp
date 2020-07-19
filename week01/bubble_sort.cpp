//
// Created by ceo on 2020/7/19.
//

#include<bits/stdc++.h>

using namespace std;

void bubble_sort(int *a, int n) {//moving window from left to right
    for (int i = 0; i < n; i++) {
        //a[n-i,n-1] is sorted;
        //a[j:j+1] j from 0 to n-i-2;
        for (int j = 0; j <= n - i - 2; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
void bubble_sort2(int *a, int n) {//moving window from right to left
    for (int i = 0; i < n; i++) {
        //a[0,i-1] is sorted;
        //a[j:j+1] j=n-2 downto i
        for (int j =n-2;j>=i;j--) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main() {
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
   // bubble_sort(a, 10);
    bubble_sort2(a,10);
    for (auto &e:a) {
        cout << e << " ";
    }
    return 0;
}