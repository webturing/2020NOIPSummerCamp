//
// Created by ceo on 2020/7/19.
//

#include<bits/stdc++.h>

using namespace std;

int Partition(int *a, int left, int right) {
    int piv = a[left];
    int i = left;
    int j = right;
    while (i < j) {
        while (j > i && a[j] >= piv)j--;
        while (i < j && a[i] <= piv)i++;
        if (i >= j)break;
        swap(a[i], a[j]);
    }
    swap(a[left], a[i - 1]);
    return i - 1;


}

void quick_sort(int *a, int left, int right) {
    if (left >= right) return;
    int i = Partition(a, left, right);//把数组分为三部分 a[left]位于中间 左边都比它小，右边都比它大
    quick_sort(a, left, i - 1);//
    quick_sort(a, i - 1, right);
    return;
}

//void quick_sort(int *a, int left, int right) {
//    if (left >= right)return;
//
//    int piv = a[left];
//    int i = left, j = right;
//    while (i < j) {
//        while (j > i && a[j] >= piv)--j;
//        while (j > i && a[i] <= piv)++i;
//        swap(a[i], a[j]);
//    }
//    swap(a[left], a[i]);
//    quick_sort(a, left, i-1);
//    quick_sort(a, i+ 1, right);
//
//}

int main() {
    int a[10] = {3, 1, 5, 7, 9, 2, 4, 6, 8, 0};
    //a[0]=3 作为哨兵   {1 2  0}  [3]  {5,6,9 6,8,4}

    quick_sort(a, 0, 9);
    for (auto &e:a) {
        cout << e << " ";
    }
    return 0;
}