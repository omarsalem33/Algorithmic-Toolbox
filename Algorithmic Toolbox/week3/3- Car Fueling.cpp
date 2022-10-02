#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long d,m,n,i,nr=0,cr=0,lr; 
    cin>>d>>m>>n;                   
    long long a[n+1];              
    a[0]=0;                        
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    a[n+1]=d;
    while(cr<=n)                          
    {                                     
        lr=cr;
        while(cr<=n && a[cr+1]-a[lr]<=m)
        {
            cr=cr+1;
        }
        if(cr==lr)
        {
            cout<<"-1"<<endl;
            break;
        }
        if(cr<=n)
        {
            nr=nr+1;
        }
    }
    if(cr!=lr)
    {
    cout<<nr<<endl;
    }
}