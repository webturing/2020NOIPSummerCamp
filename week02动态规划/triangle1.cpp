

#include<bits/stdc++.h>

using namespace std;
const int maxn = 101;
int a[maxn][maxn];
int dp[maxn][maxn];
int n;

int main() {
    cin >> n;
    memset(a, 0, sizeof(a));
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 1; j <= n; j++) { //递推基础
        dp[n][j] = a[n][j];
    }
    for (int i = n - 1; i >= 1; i--) {//自下而上计算
        for (int j = 1; j <= i; j++) {
            //dp[i][j]   dp[i+1][j] dp[i+1][j+1]
            dp[i][j] = a[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);//状态转移方程
        }

    }
    cout << dp[1][1] << endl;
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