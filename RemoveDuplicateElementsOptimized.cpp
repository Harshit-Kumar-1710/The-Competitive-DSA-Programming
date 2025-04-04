#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int>&vec,int n)
{int i,j;
    i=0;
    for(j=i+1;j<n;j++)
    {
        if(vec[i]!=vec[j])
        {
            i=i+1;
            vec[i]=vec[j];
        }
    }
return i+1;
}
int main()
{
    vector<int>v;
    int n,i,Temp;
    cout<<"Enter the Size of the Vector"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>Temp;
        v.push_back(Temp);
    }
    n=removeduplicates(v,n);
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}