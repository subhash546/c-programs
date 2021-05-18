#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;//100
    int count=0;//0
    for (int i=5;i<=n;i*=5)//5  25<=100 is true i=125
    {
        count=count+(n/i);//0+20+4

    }
    cout<<count;
}
