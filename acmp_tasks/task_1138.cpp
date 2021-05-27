#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n, k = 0, max1 = 0;
    while(cin >> n && n!=0)
    {
        if(n<k) max1 = max(n, max1);
        else max1 = k;
        k = max(k, n);
    }
    cout << max1;
}
