#include<iostream>
using namespace std;
void LongestSubstringwithoutRepeatingCharacters(string s)
{
    int i=0,j=0,Maxlen=0,len=0;
    for(i=0;i<s.length();i++)
    {
        int hash[256]={0};
        for(j=i;j<s.length();j++)
        {
            if(hash[s[j]]==1)
            {
                break;
            }
            len=j-i+1;
            Maxlen=max(Maxlen,len);
            hash[s[j]]=1;
        }
    }
}
int main()
{
    string s;
    cout<<"Enter the String: ";
    getline(cin,s);
    LongestSubstringwithoutRepeatingCharacters(s);
}