

#include<bits/stdc++.h>

using namespace std;
using ll=long long;
const int maxn = 20;
ll F[maxn]={0};
//记忆化搜索
ll fib(int n) {
    if(F[n]!=0)
        return F[n];//避免重复计算

    if (n == 1 || n == 2)
        return F[n]=1;
    else
        return F[n]=fib(n - 1) + fib(n - 2);
}

int main() {
   // cout<<"T(100)="<<0.825*pow(1.618,59)/3600/24/365<<" year(s).";
//    for (int n = 1; n <= 100; n++) {
//        ll start = clock();
//        fib(n);
//        ll end = clock();
//        cerr << "T(" << n << ")=" << 1.0*(end - start) / CLOCKS_PER_SEC << endl;
//    }
    fib(3);

    for_each(F,F+maxn,[](int x){
        cout<<x<<" ";
    });
    cout<<endl;
    fib(5);

    for_each(F,F+maxn,[](int x){
        cout<<x<<" ";
    });
    cout<<endl;
    return 0;
}