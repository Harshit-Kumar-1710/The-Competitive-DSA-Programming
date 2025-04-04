#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> RightRotateArray(vector<int>&vec,int n)
{int k,i;
    cout<<"Enter the Number of Right Rotations";
    cin>>k;
    k=k%n;
    reverse(vec.begin(),vec.end());
    reverse(vec.begin(),vec.begin()+k);
    reverse(vec.begin()+k,vec.end());
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