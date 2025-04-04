#include<iostream>
#include<map>
using namespace std;
void CountNoofPairs(int b[],int key,int n)
{int c=0;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        if(m.find(b[i]+key)!=m.end() || m.find(b[i]-key)!=m.end())
        {
            c++;
        }
        m[b[i]]=i;
    }
cout<<c;
}
int main()
{
    int arr[90],n,key,T;
    cout<<"Enter the Number of the TestCases";
    cin>>T;
    for(int j=0;j<T;j++)
    {
        cout<<"Enter the Size of an Array";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the Key";
        cin>>key;
        CountNoofPairs(arr,key,n);
    }
return 0;
}