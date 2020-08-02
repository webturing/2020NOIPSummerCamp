#include<bits/stdc++.h>

using namespace std;

struct Vector {
    int data[100000];
    int len = 0;

    void add(int x) {//O(1)
        data[len] = x;
        ++len;
    }

    void print() {
        for (int i = 0; i < len; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    void remove() {//O(1)
        if (len == 0)return;
        --len;
    }

    int size() {
        return len;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Vector a;
    for (int i = 0; i < 10; i++) {
        a.add(i);
        a.print();
    }
    while (a.size() > 0) {
        a.remove();
        a.print();
    }

    return 0;
}