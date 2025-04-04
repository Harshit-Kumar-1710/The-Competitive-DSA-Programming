#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a String";
    getline(cin,str);
    int i=0,j=str.size()-1,Flag=0;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            Flag=1;
            break;
        }
        i++;
        j--;
    }
    if(Flag==0)
    {
        cout<<"The String is a Palindrome";
    }
    else
    {
        cout<<"The String is not a Palindrome";
    }
return 0;
}