#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
    int a,b;
    cin >> a >> b;
    while(b%=a)
    {
        swap(a,b);
    }
    cout << a;
}
