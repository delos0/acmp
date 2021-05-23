#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, a, count = 0;
    cin >> n;
    for(int i = 1; i <= n*n; i++)
    {
        cin >> a;
        if(a==1) count++;
    }
    cout << count / 2;
}
