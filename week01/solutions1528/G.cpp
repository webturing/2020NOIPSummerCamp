#include<bits/stdc++.h>

using namespace std;
using ll=long long;
#define endl  '\n'


int arr[100000];
int n;

// 递归方式构建小堆(len是arr的长度，index是第一个非叶子节点的下标)
void adjust(int len, int index) {
    int left = 2 * index; // index的左子节点
    int right = 2 * index + 1;// index的右子节点

    int maxIdx = index;
    if (left < len && arr[left] > arr[maxIdx]) maxIdx = left;
    if (right < len && arr[right] > arr[maxIdx]) maxIdx = right;

    if (maxIdx != index) {
        swap(arr[maxIdx], arr[index]);
        adjust(len, maxIdx);
    }

}

// 堆排序
void heapSort(int size) {
    // 构建小堆（从最后一个非叶子节点向上）
    for (int i = size / 2; i >= 1; i--) {
        adjust(size, i);
    }

    // 调整小堆
    for (int i = size; i >= 1; i--) {
        swap(arr[1], arr[i]);           // 将当前最小的放置到数组末尾
        adjust(i, 1);              // 将未完成排序的部分继续进行堆排序
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("test.in", "r", stdin);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];


    }
    heapSort(n);
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}

