#include<bits/stdc++.h>

using namespace std;

using ll=long long;
#define endl '\n'
#define FOR(i, x, y) for (decay<decltype(y)>::type i = (x), _##i = (y); i < _##i; ++i)
#define FORD(i, x, y) for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)

template<typename T=int>
inline T read() {
    T x;
    cin >> x;
    return x;
}

char G[4][4] = {
        'A', 'B', '/', 'D',
        'E', 'F', '/', 'H',
        'I', '/', 'K', '/',
        'M', '/', 'O', 'P',
};
int book[4][4];
int fx[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};

void dfs(int x, int y) {
    book[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + fx[i][0];
        int ny = y + fx[i][1];
        if (nx < 0 || nx >= 4 || ny < 0 || ny >= 4 || book[nx][ny] || G[nx][ny] == '/')continue;
        dfs(nx, ny);
        book[nx][ny] = 1;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int area = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            if (book[i][j] == 1 || G[i][j] == '/')continue;
            ++area;
            dfs(i, j);
        }
    cout << area << endl;
    return 0;
}