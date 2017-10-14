//Arrangement Of Red And Blue Marbles
#include<bits/stdc++.h>
using namespace std;
void comp1(int r,int b,string s,int &c)
{
	if(!r && !b)
	{
		cout<<s<<" ";
		c++;
		return;
	}
	if(r==0)
	{
		comp1(0,b-1,s+"b",c);
	}
	if(b==0)
	{
		if(s[s.length()-1]!='r')
			comp1(r-1,b,s+"r",c);
		else
			return;
	}
	else if(r && b)
	{
		if(s[s.length()-1]!='r')
			comp1(r-1,b,s+"r",c);
		comp1(r,b-1,s+"b",c);
	}
}
void comp2(int r,int b,string s,int &c)
{
	if(!r && !b)
	{
		cout<<s<<" ";
		c++;
		return;
	}
	if(r==0)
	{
		comp2(0,b-1,s+"b",c);
	}
	if(b==0)
	{
		if(!(s[s.length()-1]=='r'&&s[s.length()-2]=='r'))
			comp2(r-1,b,s+"r",c);
		else
			return;
	}
	else if(r && b)
	{
		if(!(s[s.length()-1]=='r'&&s[s.length()-2]=='r'))
			comp2(r-1,b,s+"r",c);
		comp2(r,b-1,s+"b",c);
	}
}
int main()
{
int r,b,c=0;
cout<<"Enter number of red marbles (R) :";
cin>>r;
cout<<"Enter number of blue marbles (B) :";
cin>>b;
string s="";
cout<<"Part 1\n";
comp1(r,b,s,c);
cout<<"\nTotal number of possibilities is "<<c<<"\n";
c=0;
cout<<"Part 2\n";
comp2(r,b,s,c);
cout<<"\nTotal number of possibilities is "<<c<<"\n";
return 0;
}
