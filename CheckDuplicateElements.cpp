#include<iostream>
using namespace std;
void Merge(int arr[],int n,int l,int mid,int h)
{
    int b[h-l+1],i=l,j=mid+1,k=0;
    while(i<=mid && j<=h)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k]=arr[i];
        i++;
        k++;
    }
    while(j<=h)
    {
        b[k]=arr[j];
        j++;
        k++;
    }
    for(int i=l;i<=h;i++)
    {
        arr[i]=b[i-l];
    }
}
void MergeSort(int arr[],int n,int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        MergeSort(arr,n,l,mid);
        MergeSort(arr,n,mid+1,h);
        Merge(arr,n,l,mid,h);
    }
}
void CheckDuplicateElements(int b[],int n)
{
    int i=0,j,Flag=0;
    for(j=1;j<n;j++)
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
        int l=0,h=n-1;
        MergeSort(arr,n,l,h);
        CheckDuplicateElements(arr,n);
    }
}