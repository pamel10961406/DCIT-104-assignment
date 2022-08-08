#include <iostream>
using namespace std;
int main()
{
    int n, sum;
        cin>> n;
    for (int i=2; i<n; i++)
    {
        if (i%3!=0 and i%2!=0)
            {
                sum += i;
            }
        else if (i==2 and i==3)
            {
                sum += i;
            }

    }
    cout<<sum;
}