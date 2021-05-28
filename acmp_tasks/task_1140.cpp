#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n, k = 101, sum = 0, c = 102;
    while(cin >> n)
    {
        sum += n;
        c = k;
        k = n;
        if(k==0 && c==0) break;
    }
    cout << sum;
}
