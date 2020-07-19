
#include<bits/stdc++.h>

using namespace std;

int cmpX(const void *a, const void *b) {
    int *ia = (int *) a;
    int *ib = (int *) b;
    return *ia - *ib;
}

bool cmpY(const int &a, const int &b) {
    return a % 5 < b % 5;//user-define
    return a < b;//less<int>();
    return a > b;//greater<int>();
}

int main() {
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    //传统输入
//    for(int i=0;i<10;i++){
//        cin>>a[i];
//    }
//    //C++11输入
//    for(auto &e:a){
//        cin>>e;
//    }
    //qsort(a,10,sizeof(a[0]),cmpX);
    //sort(a, a + 10);//默认排序规则 less<int>()   重载 bool operator<(T )const
    sort(a, a + 10, greater<int>());//按照降序排列
    sort(a, a + 10, cmpY);
//    //用索引输出
//    for (int i = 0; i < 10; i++) {
//        cout << a[i] << " ";
//    }
    //用索引输出
    for (auto &e:a) {
        cout << e << " ";
    }
    return 0;
}