#include <iostream>
#include<climits>
#include<vector>
using namespace std;
// This Algorithm is known as the Kadane's Algorithm
void MaximumSubArraySum(vector<int>&v)
{int sum,sum1=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        sum=0;
        for(int j=i;j<v.size();j++)
        {
            sum=sum+v[j];
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