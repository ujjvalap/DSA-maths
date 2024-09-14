#include<bits/stdc++.h>
using namespace std;

int armstrong_Number(int N)
{   int num=N;
    int sum=0;
    while(N>0)
    {
        int last=N%10;
        sum=sum+(last*last*last);
        N=N/10;

    }
    return sum==num;

}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if(armstrong_Number(n))
    {
        cout<<"This is the armstrong number "<<" "<<n;
    }
    else{
        cout<<"This not armstrong number "<<" "<<n;
    }
    
    return 0; 
}