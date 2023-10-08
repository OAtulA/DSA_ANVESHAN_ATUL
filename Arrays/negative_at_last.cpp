#include <bits/stdc++.h>
using namespace std;
void negative_at_end(vector <int> &arr,int n)
    {
        int arr2[n];
        int f=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                arr2[f]=arr[i];
                f++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                arr2[f]=arr[i];
                f++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=arr2[i];
        }
    }
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    negative_at_end(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}