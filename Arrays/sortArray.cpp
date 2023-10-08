// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.\

#include <bits/stdc++.h>
using namespace std;
void sort(vector <int> &a, int n)
    {
        int zero=0;
        int one=0;
        int two=0;
        //calculating the number of each 
        for(int i=0;i<n;i++){
            if(a[i]==0) zero++;
            else if(a[i]==1) one++;
            else two++;
        }
        // adding num of each type
        int i=0;
        while(zero>0){
            a[i]=0;
            i++;
            zero--;
        }
        while(one>0){
            a[i]=1;
            i++;
            one--;
        }
        while(two>0){
            a[i]=2;
            i++;
            two--;
        }
    }
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);  
    }
    sort(a,n);
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}