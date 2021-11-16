#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int a,b,c;
    cin >> a >> b >> c;
    if(b==0)
    {
        cout << 0 <<endl;
        return 0;
    }
    if(a-(c/b)<0)
    {
        cout << 0 <<endl;
        return 0;
    }
    if(c%b!=0)
    {
        cout << a-((c/b)+1) << endl;
        return 0;
    }
    
    cout << a-(c/b) << endl;
    return 0;
}