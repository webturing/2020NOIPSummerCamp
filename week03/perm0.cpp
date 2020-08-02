#include<iostream>

using namespace std;

int main()//2^n
{
    int a, b, c, d;
    for (a = 0; a < 4; a++)
        for (b = 0; b < 4; b++)
            for (c = 0; c < 4; c++)
                for (d = 0; d < 4; d++) {
                    if (a == b || a == c || a == d)continue;
                    if (b == c || b == d)continue;
                    if (c == d)continue;


                    cout << a << b << c << d << endl;
                }
    return 0;
}
