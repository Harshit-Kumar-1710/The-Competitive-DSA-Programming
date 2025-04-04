#include<iostream>
using namespace std;
void PrintIndexesofOccurrencesofSubString(string str,string str1)
{
    int n=str.size(),i,k,j,m=str1.size(),c,Flag;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            c=0;
            for(k=i;k<j;k++)
            {
                if(str[k]==str1[k])
                {
                    c++;
                }
                else
                {
                    Flag=1;
                    break;
                }
            }
            if(c==m-1)
            {
                cout<<"The Substring is at Index: "<<i<<endl;
                i=j+1;
            }
            else if(Flag==1)
            {
                break;
            }
        }
        if(Flag==1)
        {
            i=k;
            Flag=0;
        }
    }
}
int main()
{
    string str,str1;
    cout<<"Enter the String";
    getline(cin,str);
    cout<<"Enter the SubString";
    getline(cin,str1);
    PrintIndexesofOccurrencesofSubString(str,str1);
}