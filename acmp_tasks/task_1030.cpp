#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;


int main()
{
    long long a, a1, a2, a3, a4;
    long double b, sum;
    cin >> a1 >> a2 >> a3 >> a4;

    a1 = min(a1, a2);
    a3 = min(a3, a4);

    sum = a1 + a3;

    b = sqrt(sum);
    a = trunc(b);
    cout << a; 
}
