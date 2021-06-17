#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;


int main()
{
    string s = "2.7182818284590452353602875";
    unsigned int n;
    cin >> n;

    if(n==0) cout << 3;
    else
    {
        if(s[n+2]>=53) s[n+1] += 1;
        for(unsigned int i = 0; i<=n+1; i++)
        {
            cout << s[i];
        }
    }
}
