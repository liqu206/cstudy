#include<stdio.h>
#include<time.h>
#include<math.h>
//clock():捕捉从程序开始运行到clock()被调用时所耗费的时间。这个时间单位是clock tick，即“时钟打点”。
//常数CLK_TCK：机器时钟每秒所走的时钟打点数。
//colck_t是clock()函数返回的变量类型
clock_t start,end;
/* clock_t 是 clock()函数返回的变量类型*/
double duration;
/* 记录被测函数运行时间，以秒为单位*/
#define MAXN 101 /* 多项式最大项数，即多项式次数+1*/
#define MAXK 1e5 /* 被测函数最大重复调用次数*/
double f1(int n,double a[],double x);
double f2(int n,double a[],double x);
void run(double(*f)(int n,double *,double ),double a[],int func_n);
int main(){
	int i;
	double a[MAXN]; /* 存储多项式的系数 */
	a[0]=1;
	for(i=1;i<MAXN;i++)
		a[i]=(double)(1.0/i);
	run(f1,a,1);
	run(f2,a,2);
	return 0;
} 
// f(x)=a0+a1x+……+an-1x^n-1+anx^n
double f1(int n,double a[],double x){
	int i;
	double p=a[0];
	for(i=1;i<n;i++)
		p+=(a[i]*pow(x,i));
	return p;
}
//f(x)=a0+x(a1+x(……(an-1+x(an))……))
double f2(int n,double a[],double x){
	int i;
	double p=a[0];
	for(i=n;i>0;i--)
		p=a[i-1]+x*p;
	return p;
}
void run(double(*f)(int n,double *,double ),double a[],int func_n){
	int i;
	start = clock();
	for(i=0;i<MAXK;i++)//开始计时
		f(MAXN-1,a,1.1);
	end = clock();//停止计时
	duration = ((double)(end-start))/CLK_TCK;
	printf("ticks%d=%f\n",func_n,(double)(end-start));
	printf("duration%d=%6.2e\n",func_n,duration);
}