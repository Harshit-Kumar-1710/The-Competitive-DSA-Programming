#include<iostream>
using namespace std;
void LongestPalindromeSubstring(string s)
{
    string sub,s1,MaxString;
        int n=s.size(),i=0,j=0,MaxLen=0;
           while(j<n)
           {
                sub=s.substr(i,j-i+1);
                s1=string(sub.rbegin(),sub.rend());
                if(sub==s1)
                {
                    if((j-i+1)>MaxLen)
                    {
                        MaxLen=j-i+1;
                        MaxString=sub;
                    }
                }
                if(i!=n-1)
                {
                    if(j==n-1)
                    {
                        i++;
                        j=i;
                    }
                    else
                    {
                        j++;
                    }
                }
                else
                {
                    break;
                }
           }
        cout<<"The Longest Palindrome Substring is: "<<MaxString<<endl;
}
int main()
{
    string s;
    cout<<"Enter the String: ";
    getline(cin,s);
    LongestPalindromeSubstring(s);
}