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
        '/', 'J', 'K', 'L',
        'M', 'N', '/', 'P',
};
bool book[4][4];
int fx[4][2] = {{0,  1},
                {0,  -1},
                {1,  0},
                {-1, 0}};
struct Node {
    int x, y, z;
    Node *pre;
};
Node trace[4][4];

int bfs(int sx, int sy, int ex, int ey) {//O(m*n)
    int ans = 0;
    queue<Node> Q;
    Q.push({sx, sy, 0, nullptr});
    book[sx][sy] = true;
    while (Q.size()) {
        auto &pt = Q.front();
        int x = pt.x;
        int y = pt.y;
        int z = pt.z;
        if (x == ex && y == ey) {
            cout << z << endl;
            return 0;

        }
      //  cout << G[x][y];
        ++ans;
        trace[x][y] = pt;
        Q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + fx[i][0];
            int ny = y + fx[i][1];
            if (nx < 0 || nx >= 4 || ny < 0 || ny >= 4 || book[nx][ny] || G[nx][ny] == '/')continue;
            Q.push(trace[nx][ny] = {nx, ny, z + 1, &trace[x][y]});
            book[nx][ny] = true;
        }
    }
    cout << -1 << endl;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    bfs(0, 0, 0, 3);
    int ex = 0, ey = 3;
    while (true) {
        auto pt = trace[ex][ey];
        cout << G[pt.x][pt.y];
        if (pt.pre == nullptr)break;
        ex = pt.pre->x;
        ey = pt.pre->y;

    }
    cout << endl;

    return 0;
}