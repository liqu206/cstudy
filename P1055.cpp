#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[15],b[15]="0123456789X";
    cin >> a;
    int s=0;
    int j=1;
    for(int i=0;i<12;i++)
    {
        if(a[i]=='-')
        continue;
        s=s+(a[i]-'0')*j;//-'0'使char数组字符串变成数字
        j++;
    }
    if(b[s%11]==a[12])
    {
        cout << "Right";
    }
    else
    {
        a[12]=b[s%11];
        cout << a;
    }

    return 0;
}