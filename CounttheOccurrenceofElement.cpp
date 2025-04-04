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
int CheckDuplicateElements(int b[],int n,int key,int l,int h,int count)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(b[mid]==key)
        {
            count++;
        }
        count=CheckDuplicateElements(b,n,key,l,mid-1,count);
        count=CheckDuplicateElements(b,n,key,mid+1,h,count);
    }
return count;
}
int main()
{
    int arr[90],n,T,Key;
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
        cout<<"Enter the Key to Search";
        cin>>Key;
        int l=0,h=n-1;
        MergeSort(arr,n,l,h);
        l=0,h=n-1;
        int count=0;
        count=CheckDuplicateElements(arr,n,Key,l,h,count);
        if(count==1)
        {
            cout<<"There are no duplicate occurrences of the key so its occurrence is: "<<count<<endl;
        }
        else
        {
            cout<<"The Occurrence of the key is: "<<count<<endl;
        }
    }
}