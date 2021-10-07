#include<iostream>
using namespace std;
int main() {
	int n1,n2,m,inc;
	cin>>n1>>n2;
	m=max(n1,n2);
	inc=m;
	while(true)
	{
		if(m%n1==0 and m%n2==0)
		{
			cout<<m<<endl;
			break;
		}
		m+=inc;
	}
	return 0;
}
