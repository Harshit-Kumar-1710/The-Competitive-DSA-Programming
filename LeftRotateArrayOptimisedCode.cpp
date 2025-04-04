#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> LeftRotateArray(vector<int>&vec,int n)
{int k,i;
    cout<<"Enter the Number of Left Rotations";
    cin>>k;
    k=k%n;
    reverse(vec.begin(),vec.end());
    reverse(vec.begin(),vec.begin()+n-k);
    reverse(vec.begin()+n-k,vec.end());
return vec;
}
int main()
{
    vector<int>vec={1,2,3,4,5};
    int n=vec.size();
    vector<int>vec1=LeftRotateArray(vec,n);
    for(int Val:vec1)
    {
        cout<<Val<<" ";
    }
    cout<<endl;
return 0;
}