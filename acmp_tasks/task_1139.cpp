#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n, k = 0, max1 = 0, c = 1, i = 1, a[1000];
    while(cin >> n && n!=0)
    {
        a[i] = n;
        max1 = max(max1, n);
        i++;
    }

    while(c <= i)
    {
        if (a[c]==max1) k++;
        c++;

    }

    cout << k;
}
