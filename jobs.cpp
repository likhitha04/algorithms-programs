//job scheduling

#include<iostream>
#include <map>
using namespace std;

int main()
{

int t,n,i,j,max,max_profit=0,k=0,p;
int A[t],d=0;
cout<<"enter the number of jobs:";
cin>>n;
cout<<"enter maximum time:";
cin>>t;
int a[n],b[n];
for(i=0;i<n;i++)
cin>>a[i]>>b[i];

int ans[t];
for(i=0;i<t;i++)ans[i]=0;

for(i=t;i>=1;i--)
{
max=0;
for(j=0;j<n;j++)
{
if((b[j]>=i)&&(a[j]>max))
{
max=a[j];
p=j;
}
}

A[d++]=p;
a[p]=-1;
ans[k++]=max;
}
for(i=0;i<t;i++)
{    if(ans[i]!=0)
	cout<<char(65+ A[i])<<"------"<<ans[i]<<endl;
}

for(i=0;i<t;i++)
max_profit+=ans[i];

cout<<max_profit<<endl;
return 0;

}
