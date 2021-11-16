#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  cin >> a;
  for(int i=a.size()-1;i>=0;i--)
  cout << a[i];
  return 0;
}

// #include<bits/stdc++.h>   //文件头
// using namespace std;
// string a;                 //定义字符串
// int main() 
// {
//     cin>>a;               //输入
//     reverse(a.begin(),a.end());  //反转
//     cout<<a;              //输出
//     return 0;             //养成好习惯
// }