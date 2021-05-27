#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n, k = 0, i = 0;
    while(cin >> n && n!=0)
    {
        k = max(k, n);
    }
    cout << k;
}
