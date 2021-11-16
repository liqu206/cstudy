#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long re=0;
	int n;
	cin>>n;
	for(int i=1;i<=n-3;i++)
		re+=i*(n-i-1)*(n-i-2)/2;
	cout<<re;

    return 0;
}