#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,res=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n)
    {
        r=n%10;
        n=n/10;
        res=res*10+r;

    }
    cout<<res;
    return 0;
}




