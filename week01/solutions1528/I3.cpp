#include <iostream>
#include <memory.h>
#include <string>
#include <istream>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
const int MAXN = 1000000;
int C[MAXN];
int A[MAXN];
int n;

struct Node {
    int v;
    int x;

    bool operator<(const Node &that) const {
        return this->v < that.v;
    }
} node[MAXN];

int lowbit(int x) {
    return x & -x;
}

void update(int pos, int v) {
    while (pos <= n) {
        C[pos] += v;
        pos += lowbit(pos);
    }
}

int get_sum(int pos) {
    int re = 0;
    while (pos >= 1) {
        re += C[pos];
        pos -= lowbit(pos);
    }
    return re;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(C, 0, sizeof(C));
        cin >> n;
        for (int i = 1; i <= n; i++) {
            node[i].x = i;
            cin >> node[i].v;
        }
        sort(node + 1, node + n + 1);
        int w = 1;
        A[node[w].x] = 1;
        for (int i = 2; i <= n; i++) {
            if (node[i].v == node[i - 1].v)
                A[node[i].x] = w;
            else
                A[node[i].x] = ++w;
        }
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            update(A[i], 1);
            sum += i - get_sum(A[i]);
        }
        cout << sum << endl;
    }
    return 0;
}
