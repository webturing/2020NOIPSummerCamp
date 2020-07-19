//
// Created by ceo on 2020/7/19.
//

#include<bits/stdc++.h>
using namespace std;

int c[10000];//交换数组

void merge_sort(int *a, int left, int right){
    if(left>=right)return;
    int mid=(left+right)/2;
    merge_sort(a,left,mid);//
    merge_sort(a,mid+1,right);//
    //merge a[left,mid] and a[mid+1,right] into c[left,right]

    int i=left,j=mid+1,k=left;
    while(i<=mid&&j<=right){
        if(a[i]<=a[j]){
            c[k++]=a[i++];
        }else{
            c[k++]=a[j++];
        }
    }
    while(i<=mid)c[k++]=a[i++];
    while(j<=right)c[k++]=a[j++];
    //copy c[left,right] to a[left,right]
    for(i=left;i<=right;i++)a[i]=c[i];

}

int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int n=sizeof(a)/sizeof(a[0]);
    merge_sort(a,0,n-1);
    
    for (auto &e:a) {
        cout << e << " ";
    }
    return 0;
}

