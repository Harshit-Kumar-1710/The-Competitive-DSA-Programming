#include<iostream>
using namespace std;
void LongestSubstringwithoutRepeatingCharacters(string s)
{
    int n=s.length();
    int i=0,maxc=1,Flag=0;
    while(i<n)
    {
        for(int j=i+1;s[j]!='\0';j++)
        {
            int c=1;
            for(int k=i;k<j;k++)
            {
                if(s[k]==s[j])
                {
                    Flag=1;
                    break;
                }
                else
                {
                    c++;
                }
            }
            if(Flag==1)
            {
                break;
            }
            else if(c>maxc)
            {
                maxc=c;
            }
        }
        if(Flag==1)
        {
            Flag=0;
            i++;
        }
        else
        {
            i++;
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