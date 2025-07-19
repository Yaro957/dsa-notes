// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void pattern1(int n)
{
/*
pttern to print
    *
   ***
  *****
 *******
*********
first  print la print karayha by using n-i-1
next print the stars 
stars are in pattern 1 3 5 7 9 ie 2n+1
so use it
*/
for(int j=0;j<n;j++)
    {
        for(int k=0;k<n-j-1;k++)
        {
            cout<<" ";
        }
        for(int i=0;i<(2*j+1);i++)
        {
        cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n)
{
    /*
    just the opposite of the above 
    first loop start from 0 to n
    innner loop me gaps ke lye conditon lagao ki till j<i print spaces 
    next go to print start sby condition j<(2n-i-1)+1 
    */
for(int i=0;i<n;i++)
{

    for(int j=0;j<i;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<(2*(n-i-1)+1);j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
}
void pattern3 (int n)
{
    /*
    simple pattern
    1
    0 1
    0 1 0
    1 0 1 0
    simple to implement 
    for odd print 0 
    for even print 1
    */ 
    int temp=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<j%2;

        }
        cout<<endl;
        }
}

