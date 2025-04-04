#include<iostream>
#include<vector>
using namespace std;
void FindaMissingNumber(vector<int>&vec)
{
    int i,j,n=vec.size(),Flag=1;
    for(i=1;i<=n+1;i++)
    {
        j=0;
        while(j<n)
        {
            if(vec[j]==i)
            {
                Flag=0;
                break;
            }
        }
        if(Flag==0)
        {
            Flag=1;
        }
        else
        {
            break;
        }
    }
    cout<<"The Missing Number is: "<<i<<endl;
}
int main()
{
    vector<int>vec={1,2,3,5,6};
    FindaMissingNumber(vec);
return 0;
}