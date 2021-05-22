#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, a[1000], age = 0, num, count = 0;
    cin >> n;
    for(int i = 1; i <= n*2; i++)
    {
        cin >> a[i];
    }


    for(int i = 1; i <= n*2; i++)
    {
        if(i>1 && i%2==0 && a[i]==1)
        {
            count++;
            if(a[i-1]>age)
            {
                num = i;
                age = a[i-1];
            }
        }
    }
    if(count==0) cout << -1;
    else cout << num/2;
}
