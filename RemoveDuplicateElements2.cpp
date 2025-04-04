#include<bits/stdc++.h>
using namespace std;
void removeduplicates(vector<int>&vec,int *n)
{int i,j,k;
    for(i=0;i<*n;i++)
    {
        for(j=i+1;j<*n;)
        {
            if(vec[i]==vec[j])
            {
                for(k=j;k<(*n)-1;k++)
                {
                   vec[k]=vec[k+1];
                }
            (*n)--;
            }
            else
            {
                j++;
            }
        }
    }
}
int main()
{
    vector<int>v;
    int n,i;
    cout<<"Enter the Size of the Vector"<<endl;
    cin>>n;
    v.resize(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    removeduplicates(v,&n);
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}