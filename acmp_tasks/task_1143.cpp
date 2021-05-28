#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int a = 101, b = 101, c, k = 0;

    while(cin >> c && c != 0)
    {
        if(b > a && b > c) k++;
        a = b;
        b = c;
    }
    cout << k;
}
