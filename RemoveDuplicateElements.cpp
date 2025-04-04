#include<iostream>
using namespace std;
void removeduplicates(int arr[],int *n)
{int i,j,k;
    for(i=0;i<*n;i++)
    {
        for(j=i+1;j<*n;)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<(*n)-1;k++)
                {
                    arr[k]=arr[k+1];
                }
            (*n)--;
            }
            else
            {
                j++;
            }
        }
    }
}
int main()
{
    int arr[90],n,i;
    cout<<"Enter the Size of the Array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    removeduplicates(arr,&n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}