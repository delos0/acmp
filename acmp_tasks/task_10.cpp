#include <iostream>
#include <cmath>

using namespace std;

void check(long long a, long long b, long long c)
{
    if(a>b) swap(a, b);
    if(b>c) swap(b, c);
    if(a>b) swap(a, b);

    if(b==c && c==101) cout << a;
    else if(c==101)
    {
        if(a==b) cout << a;
        else cout << a << " " << b;
    }
    else
    {
        if(a==b && b==c) cout << a;
        else if(b==c) cout << a << " " << b;
        else cout << a << " " << b << " " << c;
    }

}

int main()
{
    long long a, b, c, d, x1 = 101, x2 = 101, x3 = 101;

    cin >> a >> b >> c >> d;

    for(int i = -100; i <= 100; i++)
    {
        if( ((a*i*i*i) + (b*i*i) + (c*i) + d) == 0)
        {
            x3 = x2;
            x2 = x1;
            x1 = i;
        }
    }

    check(x1, x2, x3);
}
