#include<iostream>
using namespace std;
int main()
{
    char str[90];
    cout<<"Enter a String";
    cin.getline(str,20);
    int i,j,Flag=0,l=0;
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }
    i=0;
    j=l-1;
    cout<<"The Length of the String is: "<<l<<endl;
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