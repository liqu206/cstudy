//C++ ���
//C++ �������
//string
//pair<>
//sort reverse
//memset
 

#include <iostream>//C++ ���
#include <cstdio>//C++ ���

#include <string>//string
#include <algorithm>//sort reverse
#include <cstring>//memset

//int main()//C++ ���
//{
//      int a;
//      float b;
//      char c;
//      
//      cin>>a>>b>>c;
//      cout<<a<<"asd"<<' '<<b<<'\n'<<c;
//      
//      return 0;
//} 

//int main(){  //C++ ���������string 
//       cin>>s;
//       cout<<s.substr(1,2)<<endl;//(�±꣬����) s=123 s.substr��1��2���������Ϊ2�Ĵ��±�1��ʼ���ַ��� coutΪ2,3 
//       cout<<s.substr(1)<<endl;//������±�Ϊ1��ʼ���ַ��� 

//       s+="asda 1231";//�ַ�������Ӷ��� 
      
//gets() ��ֵ����������ʹ�� 
//������      12321  2ads���������ַ��� 
//	   getline(cin,s);//����ո񣬻س����������ַ��� 
	    
//      string ss=s; //��ֵ�������ַ���

//	   cout<<ss.size()<<endl;//�����ַ�������
	   
//	   cout<<ss<<endl; 
//       cout<<s<<endl;
       
//       cout<<s[2]<<endl; //���ָ���ַ� 
       
//	   //int a;
//       //scanf("%d",&a);
//       //printf("&d",a);
//}




/* //�ṹ���ʽ 
pair<type1,type2>


struct pair{
	type1 first
	type2 second
}*/
/*
pair<int,int>q;
//int main()
//{
//	q={1,2};
//	cout<<q.first<<q.second<<endl;
//	return 0;
//}
*/

//#define PII pair<int,int>          //�궨�� ���ṹ�� 
//#define PSI pair<string,int>
//
//#define x first
//#define y second
// 
//pair<int,int>q;
//
//
//int main()
//{
//	q={1,2};
//	//cout<<q.first<<q.second<<endl;
//	cout<<q.x<<q.y<<endl;
//	return 0;
//}

/*
int a[3]={5,1,2};
bool cmp(int a,int b){
//	return a<b;//˳������ 
	return a>b;//�������� 
}
int main(){
	int i=0;
//	sort(a,a+3);
//	sort(a,a+3,greater<int>());//�������� 

    sort(a,a+3,cmp);
  
    
	reverse(a,a+3);//�������� 
	for(i=0;i<3;i++)
	cout<<a[i]<<' ';
	return 0;
	
}
*/

/*
using namespace std;  
string s;//�Կո�Ϊ��β���ո�֮��Ķ�����ʾ���� 
char ss[100];//c���Ե��ַ���д��

struct Node{
int x;
int y;
}a[3];
bool cmp1(Node a,Node b)
{
	return a.y>b.y;//����  2 0 1 
}
int main()
{
	a[0]={0,1};
	a[1]={1,-1};
	a[2]={2,9};
	sort(a,a+3,cmp1);
	for(int i=0;i<3;i++)
	{
		cout<<a[i].x<<' ';
	}
	return 0;
}
*/


using namespace std; 
int a[3];
int main(){
//	memset(a,1,sizeof a);//�ֽڲ����ʼ�� 
	memset(a,-1,sizeof a);//�ֽڲ����ʼ�� -1
	memset(a,0,sizeof a);//�ֽڲ����ʼ�� 0
	memset(a,0x3f,sizeof a);//�ֽڲ����ʼ��  ����� 
	cout<<a[0]<<' '<<0x01010101<<endl;
	return 0;
}

















