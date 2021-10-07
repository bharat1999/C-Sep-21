#include <iostream>
using namespace std;
void solve1()
{
	long long n;
	cin>>n;
	long long i=1,ans=0,rem;
    while(n>0)
    {
        rem=n%10;
        if(rem>=5)
        {
            if(n/10==0 and rem==9)
            {}
            else
            {
                rem=9-rem;
            }
        }
        ans=ans+rem*i;
        i*=10;
        n/=10;
    }
    cout<<ans<<endl;
}

void solve2()
{
	string s;
	cin>>s;
	for(int i=1;i<s.size();i++)
	{
		if(9-(s[i]-'0')<5)
			s[i]=(9-(s[i]-'0'))+'0';
	}
	if(s[0]!='9' and (9-(s[0]-'0'))<5)
		s[0]=(9-(s[0]-'0'))+'0';
	cout<<s<<endl;	
}
int main() {
   	solve2();
   	solve1();
	return 0;
}


