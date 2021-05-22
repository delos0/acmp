#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k, m, n;
    cin >> k >> m >> n;
    if(n%k<=(k/2) && n>k && n%k!=0) cout << (( (n+k-1)/k )* 2 - 1) * m;
    else cout << ( (n+k-1)/k ) * 2 * m;
}
