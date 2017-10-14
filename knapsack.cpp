//fractional knapsack
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 int n,m;
cout<<"Enter the tonal no of item and knapsack capacity";
cin>>n>>m;
vector<vector<float > > a(n,vector<float>(4));
float x[n];
cout<<"enter the value and weight\n";
for(int i=0;i<n;i++)
 cin>>a[i][1]>>a[i][2];
for(int i=0;i<n;i++)
 {
  a[i][0]=a[i][1]/a[i][2];
  x[i]=0; a[i][3]=i;
 }
sort(a.begin(),a.end());

int i,profit=0;
for(i=n-1;i>=0;i--)
{
  if(a[i][2]<=m) {x[int(a[i][3])]=1; m=m-a[i][2];profit+=a[i][1];}
  else break;
}if(i<n)
 {x[int(a[i][3])]=m/a[i][2]; profit+=x[int(a[i][3])]*a[i][1];}
for(i=0;i<n;i++)
cout<<x[i]<<" ";

cout<<endl<<"profit "<<profit<<endl;
}
