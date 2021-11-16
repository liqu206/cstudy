#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int s=0;
    for (int i=13930;i<100000;i++)
    {
       
            if(abs(i%10-i/10000)>2)
            {
                if(abs(i%10-i/10%10)<=7&&abs(i/10%10-i/100%10)<=7&&abs(i/100%10-i/1000%10)<=7&&abs(i/1000%10-i/10000)<=7)
                {
                s++;
            
                }
            }
    }
    for(int i=100000;i<=457439;i++)
         if(abs(i%10-i/100000)>2)
           {
                 
              if(abs(i%10-i/10%10)<=7&&abs(i/10%10-i/100%10)<=7&&abs(i/100%10-i/1000%10)<=7&&abs(i/1000%10-i/10000%10)<=7&&abs(i/10000%10-i/100000)<=7)
               {
                   s++;
    
               }
           }
  cout << s << endl;
  return 0;
}