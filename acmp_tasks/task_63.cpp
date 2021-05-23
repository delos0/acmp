#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int sum, mul, x, y;
    cin >> sum >> mul;
    for(int i = 1; i <= sum; i++)
    {
        if( ((sum-i) * i) == mul )
        {
            x = i;
            y = sum - i;
        }
    }
    if( x<=y ) cout << x << " " << y;
    if( x>y ) cout << y << " " << x;
}
