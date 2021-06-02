#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
    int a, b, res, mult;
    cin >> a >> b;
    mult = a * b;
    while(b%=a)
    {
        swap(a,b);
    }

    res = mult / a;
    cout << res;
}
