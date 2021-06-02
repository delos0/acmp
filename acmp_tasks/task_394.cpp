#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;


int main()
{
    long long a, b, res;
    cin >> a >> b;
    res = lcm(a, b);
    cout << res / b;
}
