#include <bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    int n = arr.length();
    for(int i=0;i<n/2;i++)
    {
        swap(arr[i],arr[n-i-1]);
    }
    cout<<arr;
    return 0;
}