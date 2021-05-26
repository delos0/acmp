#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, i = 2, a1 = 1, a2 = 1, res = 0;
    cin >> n;

    while(i<=1000)
    {
        res = a1 + a2;
        a1 = a2;
        a2 = res;
        i++;
        if(res==n)
        {
            cout << 1 <<"\n"<< i;
            return 0;
        }
    }
    cout << 0;
}
