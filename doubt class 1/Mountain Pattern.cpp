//https://hack.codingblocks.com/app/contests/2625/571/problem

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<j<<"\t";
        for(int j=1;j<=2*(n-i)-1;j++)
            cout<<" \t";
        for(int j=i;j>0;j--)
            cout<<j<<"\t";      
        cout<<endl;      
    }
    for(int i=1;i<=n;i++)
        cout<<i<<"\t";
    for(int i=n-1;i>0;i--)
        cout<<i<<"\t";    
}

