#include<iostream>
using namespace std;
void CountDuplicateElements(int b[],int key,int n)
{
    int c=0,l=0,h=n-1,mid,K,P,Flag=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key<b[mid])
        {
            h=mid-1;
        }
        else if(key>b[mid])
        {
            l=mid+1;
        }
        else
        {
            c++;
            K=mid-1;
            P=mid+1;
            Flag=1;
            break;
        }
    }
    if(Flag==1)
    {
        while(K>=l)
        {
            if(b[K]==key)
            {
                c++;
            }
            else
            {
                break;
            }
            K--;
        }
        while(P<=h)
        {
            if(b[P]==key)
            {
                c++;
            }
            else
            {
                break; 
            }
            P++;
        }
    cout<<key<<"-"<<c<<endl;
    }
    else
    {
        cout<<"The Key is not Present";
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
    cout<<"Enter the Key";
    cin>>key;
    CountDuplicateElements(arr,key,n);
}