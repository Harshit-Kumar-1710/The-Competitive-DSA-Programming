#include<iostream>
#include<algorithm>
using namespace std;
void CheckDuplicateElements(int b[],int n)
{int Flag=0;
    sort(b,b+n);
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(b[i]!=b[j])
        {
            b[i+1]=b[j];
            i++;
        }
        else
        {
            Flag=1;
            break;
        }
    }
    if(Flag==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
int main()
{
    int arr[90],n,T;
    cout<<"Enter the Number of the TestCases";
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cout<<"Enter the Size of an Array";
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        CheckDuplicateElements(arr,n);
    }
}