#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        if(a%2==0)
            cout<<a/2*(a+1)<<endl<<endl;
        else
            cout<<(a+1)/2*a<<endl<<endl;
        }

}
/*������n*(n+1)�˷���ʱ�򣬻�����������Ҫ��You may assume the result will be in the range of 32-bit signed integer ����
Ҫ�������ͽ����32λ�з���������OJ�����Ĳ������ݵ���ͽ��(n*(n+1)/2)һ����32λ������Χ�ڵģ�����(n*(n+1))�Ͳ�һ���ˡ�
���ǿ����ƶ�WA��ԭ��Ӧ���ڴˡ����Խ���ʽ����ر䶯һ�£�
������
��������sum=n*(n+1)/2;
������Ϊ
��������if(n%2==0) //ż��
����������sum=n/2*(n+1);
��������else //����
������������sum=(n+1)/2*n;*/