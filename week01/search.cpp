//
// Created by ceo on 2020/7/19.
//

#include<bits/stdc++.h>

using namespace std;


int main() {
    int a[] = {1, 5, 7, 9, 2, 4, 6, 2, 2, 2, 8, 0};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;
    //线性算法 O(n)

    auto p = find(a, a + n, k);//找到第一次k出现的位置
    cout << p - a << endl;//索引
    p = find(p + 1, a + n, k);
    cout << p - a << endl;//索引
    int cnt = count(a, a + n, k);
    cout << "cnt=" << cnt << endl;

    sort(a, a + n); //O(nlogN)
    for (auto &e:a) {
        cout << e << " ";
    }
    cout << endl;
    //O(logN)
    cout << binary_search(a, a + n, k) << endl;//1代表出现过，0没有出现
    cout << lower_bound(a, a + n, k) - a << endl;//最后一个小于k的下一个位置
    cout << upper_bound(a, a + n, k) - a << endl;//第一个严格大于k出现的索引
    cout << upper_bound(a, a + n, k) - lower_bound(a, a + n, k) << endl;//二分算法统计出k出现的次数
    return 0;
}