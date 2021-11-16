//C++ 框架
//C++ 输入输出
//string
//pair<>
//sort reverse
//memset
 

#include <iostream>//C++ 框架
#include <cstdio>//C++ 框架

#include <string>//string
#include <algorithm>//sort reverse
#include <cstring>//memset

//int main()//C++ 框架
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

//int main(){  //C++ 输入输出，string 
//       cin>>s;
//       cout<<s.substr(1,2)<<endl;//(下标，长度) s=123 s.substr（1，2）输出长度为2的从下标1开始的字符串 cout为2,3 
//       cout<<s.substr(1)<<endl;//输出从下标为1开始的字符串 

//       s+="asda 1231";//字符串后面加东西 
      
//gets() 赋值操作，不被使用 
//输入像“      12321  2ads”这样的字符串 
//	   getline(cin,s);//输入空格，回车这种特殊字符串 
	    
//      string ss=s; //赋值给其他字符串

//	   cout<<ss.size()<<endl;//返回字符串个数
	   
//	   cout<<ss<<endl; 
//       cout<<s<<endl;
       
//       cout<<s[2]<<endl; //输出指定字符 
       
//	   //int a;
//       //scanf("%d",&a);
//       //printf("&d",a);
//}




/* //结构体格式 
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

//#define PII pair<int,int>          //宏定义 ，结构体 
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
//	return a<b;//顺序排序 
	return a>b;//倒序排序 
}
int main(){
	int i=0;
//	sort(a,a+3);
//	sort(a,a+3,greater<int>());//倒序排序 

    sort(a,a+3,cmp);
  
    
	reverse(a,a+3);//倒序排序 
	for(i=0;i<3;i++)
	cout<<a[i]<<' ';
	return 0;
	
}
*/

/*
using namespace std;  
string s;//以空格为结尾，空格之后的东西显示不了 
char ss[100];//c语言的字符串写法

struct Node{
int x;
int y;
}a[3];
bool cmp1(Node a,Node b)
{
	return a.y>b.y;//倒序  2 0 1 
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
//	memset(a,1,sizeof a);//字节层面初始化 
	memset(a,-1,sizeof a);//字节层面初始化 -1
	memset(a,0,sizeof a);//字节层面初始化 0
	memset(a,0x3f,sizeof a);//字节层面初始化  无穷大 
	cout<<a[0]<<' '<<0x01010101<<endl;
	return 0;
}

















