#include <iostream>
using namespace std;
int main()
{
    char a[3];
    while (cin >> a)
    {
    for(int i=0;i<3;i++)
     for(int j=0;j<3-1-i;j++)   //ð������
     if(a[j+1]<a[j])
     {
       char t=a[j+1];
       a[j+1]=a[j];
       a[j]=t;
     }
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;  //�������ո�ᵼ��Presentation Error
    }
    return 0;
}
