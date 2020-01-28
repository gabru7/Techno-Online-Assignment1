#include<bits/stdc++.h>

using namespace std;

void magic(int x,int y)
{
    if(x>=y){cout<<"YES\n";}
    else{
        if(x%2==0){while(x>y){x=3*x/2;};
        magic(x,y);}else{if(x>1){x--;};}magic(x,y);};
}

int main()
{
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++){cin>>x>>y;
    magic(x,y);}
}