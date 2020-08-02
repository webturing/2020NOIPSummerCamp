#include<bits/stdc++.h>

using namespace std;

struct Stack {
    int data[100000];
    int p = -1;  //a[p]
    void push(int x) {
        data[++p] = x;
    }

    void pop() {
        if (p == -1) {
            return;
        }
        --p;
    }

    int top() {
        return data[p];
    }

    bool empty() {
        return p == -1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   Stack a;
   // stack<int> a;
    for (int i = 0; i < 10; i++) {
        a.push(i);

    }
    while (!a.empty()) {
        cout << a.top() << endl;
        a.pop();
    }

    return 0;
}