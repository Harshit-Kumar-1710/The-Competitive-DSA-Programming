#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={10, 3, 5, 6, 20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int Max=INT_MIN;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]*arr[j]*arr[k]>Max)
                {
                    Max=arr[i]*arr[j]*arr[k];
                }
            }
        }
    }
    cout<<"The Maximum Product is: "<<Max<<endl;
}