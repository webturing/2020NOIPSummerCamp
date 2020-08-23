#include<iostream>
#include<vector>
using namespace std;

using ll=long long;
#define endl '\n'
#define FOR(i, x, y) for (decay<decltype(y)>::type i = (x), _##i = (y); i < _##i; ++i)
#define FORD(i, x, y) for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)
const int maxn = 500 + 1;
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

bool Merge(int x, int y) {//合并x所在的树tx,和所在的树ty
    int tx = Find(x);
    int ty = Find(y);
    if (tx == ty)return false;
    if (tx > ty)swap(tx, ty);
    F[tx] = ty;
    return true;

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

struct Edge {
    int from, to, weight;

    friend bool operator<(const Edge &a, const Edge &b) {
        return a.weight < b.weight;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    Init(n);
    vector<Edge> edges;
    for(int x=1;x<=n;x++){
        for(int y=0;y<=0;y++){
            int t;cin>>t;
            if(x==y){
                continue;
            }
            if(t!=0){
                edges.push_back({x,y,t});

            }
        }
    }
    sort(edges.begin(),edges.end());
    int cnt=0,sum=0;
    for(auto edge:edges){
        if(cnt==n-1)
            break;
        int from=edge.from;
        int to=edge.to;
        if(Merge(from,to)){
            ++cnt;
            sum+=edge.weight;
        }
    }
    cout<<sum<<endl;
    return 0;
}