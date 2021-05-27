#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double n, k = 0, i = 0;
    while(cin >> n && n!=0)
    {
        k += n;
        i++;
    }
    cout << k / i;
}
