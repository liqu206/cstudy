#include<bits/stdc++.h>//万能头文件
using namespace std;
int main()
{
    double a,b,c,p;//这里定义
    cin>>a>>b>>c;//输入
    p=(a+b+c)/2;//然后根据题目给的公示算出p的值
    double sum=sqrt(p*(p-a)*(p-b)*(p-c));//然后根据公示算出最后答案，注意使用sqrt
    cout<<fixed<<setprecision(1)<<sum;//最后保留一位小数，为最后答案。 printf("%.1lf", ans);
    return 0;//华丽结束
}

// %.1f, f是float的意思；
// %.1lf, lf是long float的意思，基本类型里没有long float?好吧，它就是double。
// long float是长浮点数，double是双精度浮点数，英语学好了很好理解。