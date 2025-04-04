#include<iostream>
#include<vector>
using namespace std;
int SubArray(vector<int>&vec,int k)
{int i,j,p,Sum,Len=0;
    for(i=0;i<vec.size();i++)
    {
        Sum=0;
        for(j=i;j<vec.size();j++)
        {
            Sum=Sum+vec[j];
            if(Sum==k)
            {
                Len=max(Len,j-i+1);
            }
        }
    }
return Len;
}
int main()
{int k,Element,n,i;
vector<int>vec;
cout<<"Enter the Size of Vector";
cin>>n;
for(i=0;i<n;i++)
{
    cout<<"Enter an Element";
    cin>>Element;
    vec.insert(vec.begin(),Element);
}
cout<<"Enter the Sum Value";
cin>>k;
int LongestSubArray=SubArray(vec,k);
cout<<"The Longest SubArray of Sum K is:"<<LongestSubArray;
return 0;
}