#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, a, count = 0, temp = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        if(a>0) count++;
        if(a<=0) count = 0;
        temp = max(count, temp);
    }

    cout << temp;
}
