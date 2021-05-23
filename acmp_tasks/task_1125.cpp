#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;

    while(i<=sqrt(n))
    {
        cout << i * i << " ";
        i++;
    }
}
