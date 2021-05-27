#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    int i = 1, a, mx = -10001, mn = 10001;
    while(cin >> a)
    {
        if(i%2==0 && i!=1) mx = max(mx, a);
        else mn = min(mn, a);
        i++;
    }
    cout << mn + mx;
}
