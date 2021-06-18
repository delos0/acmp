#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;


int main()
{
    string s = "GCV";
    int n;
    cin >> n;

    for( int i = 1; i<=n; i++)
    {
        swap(s[2], s[1]);
        swap(s[1], s[0]);
    }
    cout << s;
}
