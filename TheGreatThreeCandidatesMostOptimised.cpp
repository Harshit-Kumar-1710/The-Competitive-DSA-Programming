#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10, 3, 5, 6, 20};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int Max1=arr[n-1]*arr[0]*arr[1];
    int Max2=arr[n-3]*arr[n-2]*arr[n-1];
    int Max=max(Max1,Max2);
    cout<<"The Maximum Product is: "<<Max<<endl;
    
}