#include<bits/stdc++.h>
using namespace std;
    vector<int> decrypt(vector<int>& code, int k) 
    {int q,sum,n;
        n=code.size();
        for(int i=0;i<n;i++)
        {
            if(k==0)
            {
                code[i]=0;
            }
            else if(k>0)
            {
                sum=0;
                q=i;
                for(int j=0;j<k;j++)
                {
                    sum=sum+code[(q+1)%n];
                    q++;
                }
            code[i]=sum;
            }
            else
            {
                sum=0;
                q=i;
                for(int j=0;j<k;j++)
                {
                    sum=sum+code[(n-q-1)%n];
                    q++;
                }
            code[i]=sum;   
            }
        }
    return code;
    }
int main()
{
    vector<int>v;
    int n,i,Temp,k;
    cout<<"Enter the Size of the Vector"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>Temp;
        v.push_back(Temp);
    }
    cout<<"Enter a Key";
    cin>>k;
    v=decrypt(v,k);
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}