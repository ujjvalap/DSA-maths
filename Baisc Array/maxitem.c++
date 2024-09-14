#include<bits/stdc++.h>
using namespace std;
void large_item(vector<int>arr,int n)
{
    // first sort array
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
           if(arr[j]>arr[j+1])
           {
             int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           }
        }
    }
}
void print_array(vector<int>arr1 ,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the item of the array ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[n];
    }
    large_item(arr,n);
    
    return 0; 
}