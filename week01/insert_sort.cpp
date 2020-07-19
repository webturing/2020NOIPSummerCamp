//
// Created by ceo on 2020/7/19.
//

#include<bits/stdc++.h>

using namespace std;

void insert_sort(int *a, int n) {
    //a[0:i-1] is sorted;
    // insert a[i] into a[0,i]
    //let window a[j:j+1] from i-1 downto 0  find a[j:j+1] sorted
    for (int i = 0; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (a[j] <= a[j + 1])break;
            swap(a[j], a[j + 1]);
        }

    }

}

int main() {
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    insert_sort(a, 10);
    for (auto &e:a) {
        cout << e << " ";
    }
    return 0;
}