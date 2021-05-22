#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, mass, me = 0, her = 30001;
    cin >> num;
    for(int i = 1; i <= num; i++)
    {
        cin >> mass;
        her = min(her, mass);
        me = max(me, mass);
    }
    cout << her << " " << me;
}
