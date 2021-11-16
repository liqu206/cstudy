#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a,a1,b,b1,c,c1;
    int s,s1,s2;
    cin>>n;
    cin>>a>>a1;
    cin>>b>>b1;
    cin>>c>>c1;
    if(n%a!=0)
    s=n/a+1;
    else
    {
        s=n/a;
    }
    
    s=s*a1;
    if(n%b!=0)
    s1=n/b+1;
    else
    {
        s1=n/b;
    }
    s1=s1*b1;
    if(n%c!=0)
    s2=n/c+1;
    else
    {
        s2=n/c;
    }
    s2=s2*c1;
    if(s==s1)
    {
        if(s<s2)
        {
            cout<<s;
            return 0;
        }
        else
        {
            cout<<s2;
            return 0;
        }
    }
    else if(s==s2)
    {
         if(s<s1)
         {
             cout<<s;
             return 0;
         }
         else
         {
             cout<<s1;
             return 0;
         }
    }
    else if(s1==s2)
    {
        if(s<s1)
        {
            cout<<s;
            return 0;
        }
        else
        {
            cout<<s1;
            return 0;
        }
        
    }
    else if(s<s1&&s<s2)
    {
        cout<<s;
        return 0;
    }
    else if(s1<s2&&s1<s)
    {
        cout<<s1;
        return 0;
    }
    else if (s2<s&&s2<s1)
    {
        cout<<s2;
        return 0;
    }
    else if(s==s1==s2)
    {
         cout<<s;
         return 0;
    }   
    return 0;
}