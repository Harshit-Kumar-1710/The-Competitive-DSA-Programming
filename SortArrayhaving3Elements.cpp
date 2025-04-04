#include <iostream>
using namespace std;
void SortArrayhaving3Elements(int arr[],int n)
{int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c1++;
        }
        else if(arr[i]==1)
        {
            c2++;
        }
        else
        {
            c3++;
        }
    }
    int i=0;
    while(i!=c1)
    {
        arr[i]=0;
        i++;
    }
    int j=0;
    while(j!=c2)
    {
        arr[i]=1;
        i++;
        j++;
    }
    j=0;
    while(j!=c3)
    {
        arr[i]=2;
        i++;
        j++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() 
{
    int n;
    cout<<"Enter the Size of the Array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    SortArrayhaving3Elements(arr,n);
    return 0;
}