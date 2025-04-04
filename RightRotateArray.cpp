#include<iostream>
#include<vector>
using namespace std;
vector<int> RightRotateArray(vector<int>&vec,int n)
{int k,i;
    cout<<"Enter the Number of Right Rotations";
    cin>>k;
    for(int j=0;j<k;j++)
    {
        int Temp=vec[n-1];
        for(i=n-1;i>0;i--)
        {
            vec[i]=vec[i-1];
        }
        vec[i]=Temp;
    }
return vec;
}
int main()
{
    vector<int>vec={1,2,3,4,5};
    int n=vec.size();
    vector<int>vec1=RightRotateArray(vec,n);
    for(int Val:vec1)
    {
        cout<<Val<<" ";
    }
    cout<<endl;
return 0;
}