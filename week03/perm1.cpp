#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {0, 1, 2, 3};//0123=>0132=>0213=>0231=>....=>3210
//    next_permutation(a, a + 4);
//    cout << a[0] << a[1] << a[2] << a[3] << endl;
//    next_permutation(a, a + 4);
//    cout << a[0] << a[1] << a[2] << a[3] << endl;
//    next_permutation(a, a + 4);

    do {
        cout << a[0] << a[1] << a[2] << a[3] << endl;
    } while (next_permutation(a, a + 4));
    return 0;
}
