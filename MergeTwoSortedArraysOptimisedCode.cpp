#include<iostream>
#include<vector>
using namespace std;
void MergeTwoSortedArrays(vector<int>nums1,vector<int>nums2,int m,int n)
{
    /*
    Now Nums1 Array has the Size of M+N .For Eg:- it consists of [1,2,3,0,0,0] where 0's are the Extra Elements.
    These 0's are used to store the Elements of Nums2 Array but in a sorted order.*/
    int i=m-1,j=n-1,k=m+n-1;
    while(j>=0)
    {
        if(i>=0 && nums1[i]>nums2[j]) 
        {
            nums1[k--]=nums1[i--];
        }
        else if(i>=0 && nums1[i]==nums2[j])
        {
            nums1[k--]=nums1[i--];
            nums1[k--]=nums2[j--];
        }
        else
        {
            nums1[k--]=nums2[j--];
        }
    }
}
int main()
{vector<int>nums1,nums2;
int n,m,Temp,i;
cout<<"Enter the No. of Elements to be Merged in nums1 Array";
cin>>m;
cout<<"Enter the No. of Elements in nums2 Array";
cin>>n;
cout<<endl;
for(i=0;i<m;i++)
{
    cout<<"Enter the "<<i+1<<" Merged Element of nums1 Array";
    cin>>Temp;
    nums1.insert(nums1.begin()+i,Temp);
}
while(i<m+n)
{
    nums1.insert(nums1.begin()+i,0);
    i++;
}
for(int i=0;i<n;i++)
{
    cout<<"Enter the "<<i+1<<" Element of nums2 Array";
    cin>>Temp;
    nums2.insert(nums2.begin()+i,Temp);
}
MergeTwoSortedArrays(nums1,nums2,m,n);
for(int Val:nums1)
{
    cout<<Val<<" ";
}
cout<<endl;
return 0;
}