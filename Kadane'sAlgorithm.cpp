#include <iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
// This Algorithm is known as the Kadane's Algorithm
void MaximumSubArraySum(vector<int>&v)
{int Currentsum=0,MaxSum=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        Currentsum=Currentsum+v[i];
        MaxSum=max(MaxSum,Currentsum);
        if(Currentsum<0)
        {
            Currentsum=0;
        }      
    }
    cout<<MaxSum<<endl;
}
int main() {
    vector<int>v={-2,1,-3,4,-1,2,1,-5,4};
    MaximumSubArraySum(v);
    return 0;
}