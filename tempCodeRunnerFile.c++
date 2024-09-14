#include<bits/stdc++.h>
using namespace std;
int pritn_divisor(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the numebr :";
    cin>>n;
    cout<<pritn_divisor(n);
    return 0; 
}
