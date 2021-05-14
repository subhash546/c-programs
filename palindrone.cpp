#include<iostream>
using namespace std;
int main ()
{
    int n,r,res=0;
  int n1;
    cout<<"enter a number: "<<endl;
    cin>>n;
    n1=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        res=res*10+r;

    }
    cout<<res<<endl;
    if(n1==res)
        cout<<"palindrone";
    else
        cout<<"not palindrone";

    return 0;
}




