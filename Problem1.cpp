#include<bits/stdc++.h> 
using namespace std;

int main() {
	string s;
   cin>>s;
   string a="",b="";
   int j=0;

   for(int i=0;s[i]!='/';i++)
   {
      a+=s[i];
      j++;
   }
   for(int k=j+1;k<s.size();k++)
   {
      b+=s[k];
   }
   string final=b+"/"+a;
   cout<<final<<"\n";
return 0;
}
