#include<bits/stdc++.h>
using namespace std;
int pritn_divisor(int n)
{
    long long sum=0;
    for(long long i=1; i<=n; i++)
    {
        // if(n%i==0)
        // {
            sum+=i*(n/i);
        // }
    }
    return sum;

}
int main(){
    long long n;
    cout<<"Enter the numebr :";
    cin>>n;
    cout<<pritn_divisor(n);
    return 0; 
}
