#include <iostream>
using namespace std;
// This Algorithm is known as the Dutch National Flag Algorithm
void SortArrayhaving3Elements(int arr[],int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cout<<"Enter the Size of the Array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    SortArrayhaving3Elements(arr,n);
    return 0;
}