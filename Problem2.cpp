#include<bits/stdc++.h>

using namespace std;
const int r=3;
const int c=3;

string arr[r][c];

void make_array()
{
    for(int i=0;i<r;i++){for(int j=0;j<c;j++)
    {
        cin>>arr[i][j];
    };};
}

void transpose(string ar[r][c])
{
    cout<<"Transpose of matrix:-\n";
    for(int i=0;i<r;i++){for(int j=0;j<c;j++)
    {cout<<ar[j][i]<<" ";};
    cout<<"\n";};
}

void trace(string ar[r][c])

{
    if (r==c){
    long double trace=0;
   for(int p=0;p<r;p++){string s=ar[p][p];
   string a="",b="";
   int j=0;
    for(int i=0;s[i]!='/';i++)
   {
      a+=s[i];
      j++;
   }
   long double a1=stoi(a);
   for(int k=j+1;k<s.size();k++)
   {
      b+=s[k];
   }
   long double b1=stoi(b);
    trace+=a1/b1;
   };cout<<"Trace Of Matrix is:- "<<trace<<"\n";}else{cout<<"Trace does not exist";};

};

int main()
{
string a,b,c,d,e,f,g,h,i;
cout<<"Enter elements of matrix of each row separated by space\n";
make_array();
transpose(arr);
trace(arr);
return 0;
}