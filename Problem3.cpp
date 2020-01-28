#include<bits/stdc++.h>

using namespace std;
const int r=3;
const int c=3;
int O[r][c];
int D[r][c];
int equality_checker(int O[r][c],int D[r][c]);


int main()
{
    
int tmp[2];
    cout<<"Enter binaries pairwise separated by space and new line for new pair:-\n";
    for(int i=0;i<3;i++){for(int j=0;j<3;j++){for(int k=0;k<2;k++){
    cin>>tmp[k];};O[i][j]=tmp[0] | tmp[1];
    D[i][j]=tmp[0]&tmp[1];};};
cout<<"\nArray O :-\n";
    for(int i=0;i<3;i++){for(int k=0;k<3;k++){cout<<O[i][k]<<" ";}cout<<"\n";}
cout<<"\nArray D :-\n";
for(int i=0;i<3;i++){for(int k=0;k<3;k++){cout<<O[i][k]<<" ";}cout<<"\n";};
    
    
    cout<<"\nSum of indices at which O and D have equal values :- "<<equality_checker(O,D);
    
    return 0;
   
}
int equality_checker(int O[r][c],int D[r][c])
{
    int sum=0;
    for(int i=0;i<3;i++){for(int j=0;j<3;j++){int k=1;
    if(O[i][j]==D[i][j]){sum+=k;};
    k++;};};
return sum;    
}
