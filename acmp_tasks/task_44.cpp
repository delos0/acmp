#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;


int main()
{
    string s, str = ">>-->", str2 = "<--<<";
    cin >> s;
    unsigned int from = 0;
    int c = 0;
    while(s.find(str, from)<=1840)
    {
        c++;
        from = s.find(str, from) + 1;
    }
    from = 0;

    while(s.find(str2, from)<=1840)
    {
        c++;
        from = s.find(str2, from) + 1;
    }
    cout << c;
}
