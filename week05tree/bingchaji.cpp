#include<iostream>

using namespace std;

using ll=long long;
#define endl '\n'
#define FOR(i, x, y) for (decay<decltype(y)>::type i = (x), _##i = (y); i < _##i; ++i)
#define FORD(i, x, y) for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)
const int maxn = 5 + 1;
int F[maxn];

void Init(int n) {//并查集的初始化
    for (int i = 1; i <= n; i++) {
        F[i] = i;
    }

}

int Find(int x) {//查找x所在的树的根
    if (F[x] == x) {
        return x;
    }
    return F[x] = Find(F[x]);//路径压缩

}

void Merge(int x, int y) {//合并x所在的树tx,和所在的树ty
    int tx = Find(x);
    int ty = Find(y);
    if (tx == ty)return;
    if (tx > ty)swap(tx, ty);
    F[tx] = ty;

}

int Count(int n) {//统计并查集的个数
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (F[i] == i)++cnt;
    }
    return cnt;
}

void Show(int n) {
    for (int i = 1; i <= n; i++) {
        cerr << F[i] << " ";
    }
    cerr << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n = 5;
    Init(n);
    Show(n);
    Merge(1, 2);
    Merge(2, 3);
    Merge(4, 5);
    Show(n);
    cout << Count(n) << endl;//并查集的大小
    return 0;
}