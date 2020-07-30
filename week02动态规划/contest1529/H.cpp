#include<bits/stdc++.h>

using namespace std;


int dp[20010];
int a[100][2];

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++) {
        dp[i] = 999999;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i][0], &a[i][1]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= a[i][1]; j++) {
            for (int k = m; k >= a[i][0] && a[i][1] > 0; k--) {
                dp[k] = min(dp[k], dp[k - a[i][0]] + 1);
            }
        }
    }
    if (dp[m] == 999999)
        printf("><\n");
    else
        printf("%d\n", dp[m]);
}