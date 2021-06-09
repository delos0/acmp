#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;


int main()
{
    char n;
    long long l = 1, r = 1000000000, m = 500000000;


    cout << m << endl;
    while(cin >> n && n!='=')
    {
        if(n=='>') l = m + 1;
        else r = m;
        m = (l + r) / 2;
        cout << m << endl;
    }
}
