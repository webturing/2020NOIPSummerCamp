//
// Created by ceo on 2020/7/19.
//

#include<bits/stdc++.h>

using namespace std;
const int maxn = 101;
int a[maxn][maxn];
int dp[maxn][maxn];
int n;

int f(int x, int y) {//以a[x,y]为顶点的三角形的最大值
    if (dp[x][y])return dp[x][y];
    if (x == n) {
        return dp[x][y] = a[x][y];
    }
    int bottom = f(x + 1, y);
    int right = f(x + 1, y + 1);
    return dp[x][y] = max(bottom, right) + a[x][y];
}

int main() {
    cin >> n;
    memset(a, 0, sizeof(a));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    cout << f(1, 1) << endl;
    return 0;
}
/**
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
 */