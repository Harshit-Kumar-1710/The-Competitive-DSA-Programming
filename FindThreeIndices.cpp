#include<iostream>
#include<map>
using namespace std;
void FindThreeIndices(int b[],int n)
{int i,j,sum,k=0,Flag=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           sum=b[i]+b[j];
           for(k=j+1;k<n;k++)
           {
                if(sum==b[k])
                {
                    cout<<i<<","<<j<<","<<k;
                    Flag=1;
                    break;
                }
           }
        if(Flag==1)
        {
            break;
        }
        }
    if(Flag==1)
    {
        break;
    }
    }
    if(Flag==0)
    {
        cout<<"No Sequence Found";
    }
}
int main()
{
    int arr[90],n,key;
    cout<<"Enter the Size of an Array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    FindThreeIndices(arr,n);
}