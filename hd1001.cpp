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
/*可能在n*(n+1)乘法的时候，会溢出。看这句要求“You may assume the result will be in the range of 32-bit signed integer ”，
要求的是求和结果是32位有符号整数。OJ给出的测试数据的求和结果(n*(n+1)/2)一定是32位整数范围内的，但是(n*(n+1))就不一定了。
我们可以推断WA的原因应该在此。可以将公式巧妙地变动一下：
　　把
　　　　sum=n*(n+1)/2;
　　改为
　　　　if(n%2==0) //偶数
　　　　　sum=n/2*(n+1);
　　　　else //奇数
　　　　　　sum=(n+1)/2*n;*/