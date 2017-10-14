//Dijkstas algo
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int cost[10][10],dist[20],i,j,nodes,k,edges,v;

bool visited[20];

void initialis()
{
	for(i=1;i<=nodes;i++)
	visited[i]=false;
}
 
int shortest(int v,int n)
{
	int p=n-1;
	for(i=1;i<=n;i++)
dist[i]=cost[v][i];
int min_val;
visited[v]=1; //source is marked as visited

dist[v]=0;  //distance of source from source
	while(p--){


min_val=31999;
k=-1;  //node having minimum distance from source

for(j=1;j<=n;j++)
{    
if(dist[j]<min_val && visited[j]!=1){
min_val=dist[j];
k=j;
}
 
}
if(k!= -1)
visited[k]=true;

for(j=1;j<=n;j++)
{
if(visited[j]!=true && visited[k]==true)
dist[j]=min(dist[j],dist[k]+cost[k][j]);
}

}
}


int main()
{
int c;
cout <<"enter no of vertices";
cin >> nodes;
cout <<"enter no of edges"; 
cin >>edges;
cout <<"\nenter\nEDGE Cost\n";
for(k=1;k<=edges;k++)
{
cin >> i >> j >>c;
cost[i][j]=c;
}

for(i=1;i<=nodes;i++)
for(j=1;j<=nodes;j++)
if(cost[i][j]==0)
cost[i][j]=31999;

cout <<"enter initial vertex";
cin >>v;
shortest(v,nodes);

for(i=1;i<=nodes;i++)
cout<<dist[i]<<endl;

return 0;
 }

