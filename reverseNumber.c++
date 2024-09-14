#include<bits/stdc++.h>
using namespace std;
int revirse_Number(int n)
{
    int rem;
    int ans=0;
    while(n>0)
    {
        rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }

    return ans;
}
int main(){
    int i;
    cout<<"Enter the number :";
    cin>>i;
    cout<<"Reverse the number "<< revirse_Number(i);
    
    return 0; 
}