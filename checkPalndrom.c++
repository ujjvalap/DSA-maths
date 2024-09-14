#include<bits/stdc++.h>
using namespace std;
bool Pailndrom_number(string s)
{
    int low=0;
    int high=s.size()-1;
    while(low<=high)
    {
        if(s[low]!=s[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter the char :";
    cin>>s;
    if(Pailndrom_number(s))
    {
        cout<<"This is the palndrom number"<<" "<<s;
    }
    else{
        cout<<"This is not palndrom number"<<" "<<s;
    }
    return 0; 
}