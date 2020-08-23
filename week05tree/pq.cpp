#include<iostream>
#include<algorithm>
#include<iterator>
#include<string>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<utility>
#include<vector>
#include<map>
#include<queue>
#include<set>

using namespace std;

using ll=long long;
#define endl '\n'
#define FOR(i, x, y) for (decay<decltype(y)>::type i = (x), _##i = (y); i < _##i; ++i)
#define FORD(i, x, y) for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a[]={1,3,5,7,9,2,4,6,8,0};
 //   queue<int> Q;
  //  priority_queue<int> Q;//大顶堆
    priority_queue<int,vector<int>,greater<int>> Q;//小顶堆的定义
    for(int i=0;i<10;i++){
        Q.push(a[i]);
    }

    while(Q.size()){
        cout<<Q.top()<<endl;
        Q.pop();
    }
    return 0;
}