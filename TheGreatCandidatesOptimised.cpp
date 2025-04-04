#include<iostream>
#include<algorithm>
using namespace std;
void Merge(int arr[],int left,int mid,int right)
{int b[right-left+1],i=left,j=mid+1,k=0;
    while(i<=mid && j<=right)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            b[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        b[k]=arr[i];
        k++;
        i++;
    }
    while(j<=right)
    {
        b[k]=arr[j];
        k++;
        j++;
    }
    k=0;
    for(i=left;i<=right;i++)
    {
        arr[i]=b[k];
        k++;
    }
}
void MergeSort(int arr[],int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int mid=left+(right-left)/2;
    MergeSort(arr,left,mid);
    MergeSort(arr,mid+1,right);
    Merge(arr,left,mid,right);
}
int main()
{
    int arr[]={10, 3, 5, 6, 20};
    int n=sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr,0,n-1);
    int Max1=arr[n-3]*arr[n-2]*arr[n-1];
    int Max2=arr[0]*arr[1]*arr[n-1];
    int Max=max(Max1,Max2);
    cout<<"The Maximum Product is: "<<Max<<endl;
return 0;
}