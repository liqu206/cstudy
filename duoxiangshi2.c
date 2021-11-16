#include<stdio.h>
#include<time.h>
#include<math.h>
//clock():��׽�ӳ���ʼ���е�clock()������ʱ���ķѵ�ʱ�䡣���ʱ�䵥λ��clock tick������ʱ�Ӵ�㡱��
//����CLK_TCK������ʱ��ÿ�����ߵ�ʱ�Ӵ������
//colck_t��clock()�������صı�������
clock_t start,end;
/* clock_t �� clock()�������صı�������*/
double duration;
/* ��¼���⺯������ʱ�䣬����Ϊ��λ*/
#define MAXN 101 /* ����ʽ���������������ʽ����+1*/
#define MAXK 1e5 /* ���⺯������ظ����ô���*/
double f1(int n,double a[],double x);
double f2(int n,double a[],double x);
void run(double(*f)(int n,double *,double ),double a[],int func_n);
int main(){
	int i;
	double a[MAXN]; /* �洢����ʽ��ϵ�� */
	a[0]=1;
	for(i=1;i<MAXN;i++)
		a[i]=(double)(1.0/i);
	run(f1,a,1);
	run(f2,a,2);
	return 0;
} 
// f(x)=a0+a1x+����+an-1x^n-1+anx^n
double f1(int n,double a[],double x){
	int i;
	double p=a[0];
	for(i=1;i<n;i++)
		p+=(a[i]*pow(x,i));
	return p;
}
//f(x)=a0+x(a1+x(����(an-1+x(an))����))
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
	for(i=0;i<MAXK;i++)//��ʼ��ʱ
		f(MAXN-1,a,1.1);
	end = clock();//ֹͣ��ʱ
	duration = ((double)(end-start))/CLK_TCK;
	printf("ticks%d=%f\n",func_n,(double)(end-start));
	printf("duration%d=%6.2e\n",func_n,duration);
}