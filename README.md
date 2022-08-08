# DCIT-104-assignment
#include <iostream>
using namespace std;
int main()
{
  int x, sum;
    cin>> x;
  for (int i=2; i<x; i++)
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
 
      
