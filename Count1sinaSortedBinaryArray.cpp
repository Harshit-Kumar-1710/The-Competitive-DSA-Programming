#include<iostream>
using namespace std;
int main()
{
    int arr[]={1, 1, 0, 0, 0, 0, 0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            sum=sum+arr[i];
        }
    }
    cout<<"The Number of 1's are: "<<sum<<endl;
return 0;
}