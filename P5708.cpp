#include<bits/stdc++.h>//����ͷ�ļ�
using namespace std;
int main()
{
    double a,b,c,p;//���ﶨ��
    cin>>a>>b>>c;//����
    p=(a+b+c)/2;//Ȼ�������Ŀ���Ĺ�ʾ���p��ֵ
    double sum=sqrt(p*(p-a)*(p-b)*(p-c));//Ȼ����ݹ�ʾ������𰸣�ע��ʹ��sqrt
    cout<<fixed<<setprecision(1)<<sum;//�����һλС����Ϊ���𰸡� printf("%.1lf", ans);
    return 0;//��������
}

// %.1f, f��float����˼��
// %.1lf, lf��long float����˼������������û��long float?�ðɣ�������double��
// long float�ǳ���������double��˫���ȸ�������Ӣ��ѧ���˺ܺ���⡣