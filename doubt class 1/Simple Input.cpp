//https://hack.codingblocks.com/app/contests/2625/206/problem

#include<iostream>
using namespace std;
int main() {
	int n,sum=0;
	while(true)
	{
		cin>>n;
		sum+=n;
		if(sum<0)
			break;
		cout<<n<<endl;	
	}
	return 0;
}
