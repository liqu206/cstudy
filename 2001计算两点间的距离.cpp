#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1,x2,y1,y2;
    while(scanf("%f%f%f%f",&x1,&y1,&x2,&y2)!=EOF)//0 0 0 1Êý×ÖÊäÈë while(cin>>x1>>x2>>y1>>y2)
    {
        float b=sqrt(abs(x2-x1)*abs(x2-x1)+abs(y2-y1)*abs(y2-y1));
        printf("%.2f\n",b);
    }

    return 0;
}