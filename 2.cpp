#include <iostream>
using namespace std;
void test(int *p1){
    *p1=114514;
}
int main()
{
    int *p1=NULL;
    int p=2333;
    p1=&p;
    printf("*p1=%d£¬p1=%d, &p1=%d, &(*p1)=%d, p=%d, &p=%d\n",*p1,p1,&p1,&(*p1),p,&p); 
    test(p1);
    printf("*p1=%d£¬p1=%d, &p1=%d, &(*p1)=%d, p=%d, &p=%d\n",*p1,p1,&p1,&(*p1),p,&p); 


   

    return 0;
}