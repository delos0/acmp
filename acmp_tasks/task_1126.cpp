#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i = 2;
    cin >> n;

    while(i<=n)
    {
        if(n%i==0)
        {
            cout << i;
            return 0;
        }
        i++;
    }
}
