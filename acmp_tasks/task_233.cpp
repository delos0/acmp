#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, a;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        if(a<=437)
        {
            cout << "Crash " << i;
            return 0;
        }
    }
    cout << "No crash";
}
