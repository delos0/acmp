#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
    int x, n = 0, i = 0;
    double s = 0, q = 0, b, res, a[1000];

    while(cin >> x && x!=0)
    {
        a[n] = x;
        s = s + x;
        n++;
    }

    s = s / n;

    while(i < n)
    {
        b = (a[i] - s) * (a[i] - s);
        q = q + b;
        i++;
    }

    res = sqrt(q / (n-1));
    cout << res;
}
