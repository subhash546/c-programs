#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,r, ec=0,oc=0;
    cout<<"enter a number: "<<endl;
    cin>>n; //4569
    while(n)
    {
        r=n%10; //extract 9 
        n=n/10;//456
    
        if (r%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
            cout<<ec<<oc;
            return 0;


            
    
        
    
    
  
}



