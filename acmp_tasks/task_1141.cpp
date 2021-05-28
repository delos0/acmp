#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n, c = 1, prev = 0, max1 = 0;
    while(cin >> n && n != 0)
    {
        if(prev == n) c++;
        else c = 1;
        prev = n;
        max1 = max(c, max1);
    }
    cout << max1;
}
