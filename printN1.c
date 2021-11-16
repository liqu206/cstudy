#include <stdio.h>
void PrintN(int N)
{
    if(N){
        PrintN(N-1);
        printf("%d\n",N);
    }
    return;
}
void PrintN1(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    return;
}
int main()
{
    int N;
    printf("please input number:");
    scanf("%d",&N);
    PrintN(N);
    return 0;
}