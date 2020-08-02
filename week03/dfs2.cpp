#include<bits/stdc++.h>

using namespace std;
const int n = 4;
int a[n];
int book[n] = {0};

void dfs(int k) {//搜索的深度
    if (k == n) {//搜索进入叶子结点
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;//终止
    }
    for (int i = 0; i < n; i++) {
        if (book[i] == 1)continue;
        book[i] = 1;
        a[k] = i;
        dfs(k + 1);
        book[i] = 0;
    }
}

int main() {
    dfs(0);
    return 0;
}
