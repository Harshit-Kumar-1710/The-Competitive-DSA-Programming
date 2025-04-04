#include <iostream>
#include<climits>
#include<vector>
using namespace std;
void MaximumSubArraySum(vector<int>&v)
{int sum,sum1=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i;j<v.size();j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=v[k];
            }
            sum1=max(sum1,sum);
        }
    }
    cout<<sum1<<endl;
}
int main() {
    vector<int>v={-2,1,-3,4,-1,2,1,-5,4};
    MaximumSubArraySum(v);
    return 0;
}