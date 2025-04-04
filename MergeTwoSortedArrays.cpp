#include<iostream>
#include<vector>
using namespace std;
vector<int> MergeTwoSortedArrays(vector<int>nums1,vector<int>nums2,int m,int n)
{
    vector<int>nums3(m+n);
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(nums1[i]<nums2[j])
        {
            nums3[k++]=nums1[i++];
        }
        else
        {
            nums3[k++]=nums2[j++];
        }
    }
    while(i<m)
    {
        nums3[k++]=nums1[i++];
    }
    while(j<n)
    {
        nums3[k++]=nums2[j++];
    }
return nums3;
}
int main()
{vector<int>nums1,nums2;
int n,m,Temp;
cout<<"Enter the No. of Elements in nums1 Array";
cin>>m;
cout<<"Enter the No. of Elements in nums2 Array";
cin>>n;
cout<<endl;
for(int i=0;i<m;i++)
{
    cout<<"Enter the "<<i+1<<" Element of nums1 Array";
    cin>>Temp;
    nums1.insert(nums1.begin()+i,Temp);
}
for(int i=0;i<n;i++)
{
    cout<<"Enter the "<<i+1<<" Element of nums2 Array";
    cin>>Temp;
    nums2.insert(nums2.begin()+i,Temp);
}
nums1=MergeTwoSortedArrays(nums1,nums2,m,n);
for(int Val:nums1)
{
    cout<<Val<<" ";
}
cout<<endl;
return 0;
}