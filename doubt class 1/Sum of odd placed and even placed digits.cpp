//https://hack.codingblocks.com/app/contests/2625/25/problem

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int rev=0;
	int c=1,e=0,o=0;
	while(n>0)
	{
		if(c%2!=0)
			o+=n%10;
		else
			e+=n%10;	
		c++;
		n/=10;
	}
	cout<<o<<endl<<e<<endl;
	return 0;
}
