

#include<bits/stdc++.h>

using namespace std;
using ll=long long;


int main() {
    cout<<"T(100)="<<158*pow(1.618,48)/3600/24/365<<" year(s).";
    ll fib[51] = {0, 1, 1};
    for (int i = 3; i <= 50; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[50] << endl;
    return 0;
}