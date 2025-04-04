#include<iostream>
#include<vector>
using namespace std;
int RemoveElement(vector<int>vec,int val)
{
    int count=0;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]!=val)
        {
            vec[count]=vec[i];
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return count;
}
int main()
{
    vector<int>vec={3,2,2,3};
    int val;
    cout<<"Enter the Element to Delete";
    cin>>val;
    int OtherElements=RemoveElement(vec,val);
    cout<<"The Elements other than val given are:"<<OtherElements;
return 0;
}