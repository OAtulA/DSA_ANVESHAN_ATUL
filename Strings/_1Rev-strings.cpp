#include <bits/stdc++.h>
using namespace std;
string reverseWord(string str)
    {
        
        int len = str.length();
        for(int i=0;i<len/2;i++){
            char temp=str[i];
            str[i]=str[len-i-1];
            str[len-i-1]=temp;
        }
        return str;
        
    }
int main()
{
    string word;
    cin>>word;
    cout<<reverseWord(word);
    return 0;
}