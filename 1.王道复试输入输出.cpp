#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	scanf("%d %d",&a,&b);//��������  
		/*
	�������룺
	1 2
	*/
	
	while(scanf("%d %d",&a,&b)!=EOF)  while(cin>>a>>b)//�������룬δ֪���� 
		/*
	�������룺
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
	
	
	//�������룬ָ������ 
	/*
	�������룺
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
	//�������룬�ض����� 
		/*
	�������룺
	2
	1 5
	10 20 
	0  0       //0 0ֹͣ���� 
	*/
	printf("%d\n",a+b); cout<<a+b<<endl;
	return 0;
} 

