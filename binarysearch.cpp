#include <bits/stdc++.h>
using namespace std;
/*
binary sraech code
base needed is that aray must be sorted
then we divide the array in half to make and search for mid if it is the element to find
if it is less then shift end=mid-1
if it greater then shift start to mid+1
*/
int bin_srch(vector<int> &arr, int key,int s = 0,int e = arr.size() - 1)
{
    

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {

            e = mid - 1;
        }
    }
}
int firstOcc(vector<int> &arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;

    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int lastOcc(vector<int> &arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;

    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int peakMountain(vector<int>&arr,int n)
{
    int s=0,e=arr.size()-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        
        else{
            e=mid;
        }
    }
    return s;
}
int findPivot(vector<int>&arr)
{
    /* 
    used to find the first element of array in a rotated sorted array
    keeping moving the mid until the first the element is smaller than mid
    */
    int s=0,e=arr.size()-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}
int srchInRotatedSortedArr(vector<int>&arr,int target)
{
    int pivot=findPivot(arr);
    if(target>=arr[pivot] &&target<=arr[arr.size()-1])
    {
        bin_srch(arr,target,pivot,arr.size()-1)
    }
    else{
        bin_srch(arr,target,0,pivot-1);
     }
}
int mySqrt(int x) {
    /*
    here we try to take out square of a no without using any standard function but we only give int value
    */
        int s=1,e=x;
        int ans=0;
        while(s<=e)
        {
            long mid=s+(e-s)/2;
            if((mid*mid)<=x)
            {
                ans=mid;
                s=mid+1;
            }

            else
            {
                e=mid-1;
            }
            
        }
        return ans;
    }
double precision(int n,int precision,int tempsol)
{
    /*
    here we have added decimal vluaes also for the square root
    */
    int factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        
        for(double j=ans;j*j<n;j+=factor)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int key;
    vector<int> arr = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 6, 7, 8, 9};
    cin >> key;
    int a=firstOcc(arr, key);
    int b=lastOcc(arr, key);
    cout << a<< endl;
    cout << b<<endl;
    cout<<"total occurance:"<<b-a+1;
}