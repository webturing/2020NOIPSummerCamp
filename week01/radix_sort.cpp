//
// Created by ceo on 2020/7/19.
//

#include<bits/stdc++.h>

using namespace std;


int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 18, 0, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int book[2000];//0~1999
    memset(book, 0, sizeof(book));//C memset按照字节工作，只能重置为0或者-1
    fill(book, book + 2000, 0);//C++ fill可以重置为任意val
    for(int i=0;i<n;i++){
        book[a[i]]++;
    }
    for(int i=0;i<2000;i++){
        while(book[i]--){
            cout<<i<<" ";
        }
    }


    return 0;
}