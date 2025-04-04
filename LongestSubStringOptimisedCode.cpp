#include<iostream>
using namespace std;
void LongestSubstringwithoutRepeatingCharacters(string s)
{
    int n=s.length(),maxc=0;
    for(int i=0;i<n;i++)
    {
        int hash[256]={0};
        for(int j=i;j<n;j++)
        {
            if(hash[s[j]]==1)
            {
                break;
            }
            hash[s[j]]=1;
            maxc=max(maxc,j-i+1);
        }
    }
cout<<"The Longest Substring is: "<<maxc<<endl;
}
int main()
{
    string s;
    cout<<"Enter the String: ";
    getline(cin,s);
    LongestSubstringwithoutRepeatingCharacters(s);
}