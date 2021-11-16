#include <bits/stdc++.h>
using namespace std;
int year,mouth;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    cin>>year>>mouth;
    if((year%4==0&&year%100!=0)||year%400==0)
    a[2]=29;
    cout<<a[mouth];
    return 0;
}