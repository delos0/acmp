#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;


int main()
{
    string s = "qwertyuiopasdfghjklzxcvbnm";
    char a;
    cin >> a;

    for(unsigned int i = 0; i<s.length(); i++)
    {
        if(a=='m') { cout << 'q'; break; }
        else if(a==s[i])
        {
            cout << s[i+1];
            break;
        }
    }
}
