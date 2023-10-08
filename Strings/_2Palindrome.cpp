#include <bits/stdc++.h>
using namespace std;
int isPalindrome(string sent)
	{
	    int len = sent.length();
	    
	    for(int i=0;i<len/2;i++){
	        if(sent[i]!=sent[len-i-1]) return 0;
	    }
	    return 1;
	}
int main()
{
    string sent;
    cin>>sent;
    cout<<isPalindrome(sent);
    return 0;
}