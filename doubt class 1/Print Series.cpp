//https://hack.codingblocks.com/app/contests/2625/201/problem

#include<iostream>
using namespace std;
int main() {
	int n1,n2,i=1;
	cin>>n1>>n2;
	int count=0;
	while(count<n1)
	{
		int s = 3*i +2;
		if(s%n2!=0)
		{
			cout<<s<<endl;
			count++;
		}
		i++;
	}
	return 0;
}
