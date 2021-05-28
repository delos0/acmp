#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int a = 101, max1 = 0, b = 101, c, k = 0, i = 0;

    while(cin >> c && c != 0)
    {
        k++;
        if(b > a && b > c)
        {
            i++;
            if(i>1 && (i==2 || (i>2 && k < max1))) max1 = k;
            k = 0;
        }
        a = b;
        b = c;
    }
    cout << max1;
}
