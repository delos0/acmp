#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;


int main()
{
    
    long long n, x = 0;
    cin >> n;
    while(n>1)
    {
        n = (n + 1) / 2;
        x++;
    }
    cout << x;
}
