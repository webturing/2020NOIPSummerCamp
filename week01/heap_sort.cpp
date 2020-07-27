//
// Created by ceo on 2020/7/19.
//

#include<bits/stdc++.h>

using namespace std;


int main() {
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
//    make_heap(a, a + 10,greater<int>());
//    for (int i = 0; i < 10; i++) {
//
//        cout<<a[0]<<" ";  pop_heap(a, a + 10 - i,greater<int>());
//    }
    priority_queue<int> Q;
    for (int i:a)Q.push(-i);
    while (Q.size()) {
        cout << -Q.top() << " ";
        Q.pop();
    }
    cout << endl;
    return 0;
}