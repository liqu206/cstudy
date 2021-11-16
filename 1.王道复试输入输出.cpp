#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	scanf("%d %d",&a,&b);//单组输入  
		/*
	样例输入：
	1 2
	*/
	
	while(scanf("%d %d",&a,&b)!=EOF)  while(cin>>a>>b)//多组输入，未知组数 
		/*
	样例输入：
	1 5
	10 20 
	*/
	
	int n;
	scanf("%d",&n); cin>>n;
	while(n--){
	int a,b;
	scanf("%d %d",&a,&b); cin>>a>>b;
	printf("%d\n",a+b);  cout<<a+b<<endl;
	}
	
	
	//多组输入，指定组数 
	/*
	样例输入：
	2
	1 5
	10 20 
	*/
	
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){  while(cin>>a>>b)
		if(a==0&&b==0)
		break;
		printf("%d\n",a+b); cout<<a+b<<endl;
	}
	//多组输入，特定跳出 
		/*
	样例输入：
	2
	1 5
	10 20 
	0  0       //0 0停止输入 
	*/
	printf("%d\n",a+b); cout<<a+b<<endl;
	return 0;
} 

