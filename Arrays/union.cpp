#include <bits/stdc++.h>
using namespace std;
int union_work(vector <int> &a, int n, vector <int> &b, int m)
{
    unordered_set<int> u;
    for (int i = 0; i < n; ++i) u.insert(a[i]);
    for (int i = 0; i < m; ++i) u.insert(b[i]);
    return u.size();
}
int main()
{
    vector<int> v1;
    vector<int> v2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    cout << union_work(v1, n, v2, n);
    return 0;
}