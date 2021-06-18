#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;


int main()
{
    int t = 0, b = 0, c = 0, y = 0;
    string s;
    cin >> s;

    if(s.length()!=5)
    {
        cout << "ERROR";
        return 0;
    }

        if(s[2]=='-') t++;
        if(s[0]>=65 && s[0]<=72) b++;
        if(s[3]>=65 && s[3]<=72) b++;
        if(s[1]>=49 && s[1]<=56) c++;
        if(s[4]>=49 && s[4]<=56) c++;

        if( abs(s[0]-s[3])==2 && abs(s[1]-s[4])==1 ) y = 1;
        else if( abs(s[0]-s[3])==1 && abs(s[1]-s[4])==2 ) y = 1;

    if(t==1 && b==2 && c==2)
    {
        if(y==1) cout << "YES";
        else cout << "NO";
    }
    else cout << "ERROR";
}
