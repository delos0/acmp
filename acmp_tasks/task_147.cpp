#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, i = 2, a0 = 0, a1 = 1, res = 0;
    cin >> n;

    while(i<=n)
    {
        res = a1 + a0;
        a0 = a1;
        a1 = res;
        i++;
    }
    if(n==1) cout << 1;

    else cout << res;
}
