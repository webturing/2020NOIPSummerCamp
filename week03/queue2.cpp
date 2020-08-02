#include<bits/stdc++.h>

using namespace std;

struct Queue {
    int data[100000];
    int head = 0, tail = 0;//data[head,tail)

    void push(int x) {
        data[tail++] = x;
    }

    void pop() {
        ++head;
    }

    int front() {
        return data[head];
    }


    int size() {
        return tail - head;
    }

    bool empty() {
        return head >= tail;
    }


};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // Queue Q;
    queue<int> Q;
    for (int i = 0; i < 10; i++) {
        Q.push(i);
    }
    while (!Q.empty()) {
        cout << Q.front() << " ";
        Q.pop();
    }

    return 0;
}