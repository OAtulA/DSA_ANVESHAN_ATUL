#include <bits/stdc++.h>
using namespace std;
void rotate(vector <int> &arr, int n)
{
    int arr2[n];
    arr2[0]=arr[n-1];
    int f=1;
    for(int i=0;i<n-1;i++){
        arr2[f]=arr[i];
        f++;
    }
    for(int i=0;i<n;i++){
        arr[i]=arr2[i];
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
    rotate(arr, n);
    for (auto &i : arr) cout << i << " ";
    return 0;
}