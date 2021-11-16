#include <iostream>
using namespace std; 
typedef struct { 
        int top[2], bot[2];
        int *V; int m; 
}DblStack; 
//��ʼ��һ����СΪ m ��˫��ջ 
void InitDblStack(DblStack &S) { 
         cout << "������˫ջ�Ĵ�С" << endl; 
         cin >> S.m;
        //��̬����һ���������Ϊ m ������ռ�
        S.V = new int[S.m]; 
        //��ջջ��ָ�� 
        S.bot[0] = -1;
        //��ջջ��ָ�� 
        S.bot[1] = S.m;
        //��ջջ��ָ�� 
        S.top[0] = -1; 
        //��ջջ��ָ�� 
        S.top[1] = S.m; 
        system("pause"); 
        system("cls"); 
} 
//��ָ���� i ��ջ�в���Ԫ�� 
void DblPush(DblStack &S) { 
               int i = 0; 
               int j = 0;  
               int flag=0;
               int *x = new int(); 
               cout << "��������Ҫ�������ݵ�ջ��" << endl; 
               cin >> i; 
               //�ж�ջ���Ƿ�������� 
               if (i < 0 || i>1) 
                          cout << "ջ���������" << endl; 
               //�� 0 ջ�������ݣ���֮�� 1 ջ�������� 
               if (i == 0) { 
                        cout << "��Ҫ�ڴ�ջ�������ݵĸ���" << endl; 
                        cin >> j; 
                        for (int t = 0;t < j;t++) { 
                                cout << "�����" << (t + 1) << "����" << endl; 
                                cin >> *x; 
                                //�ж�ջ�Ƿ����� 
                               if (S.top[0] + 1 == S.top[1]) { 
                                               cout << "˫ջ�������޷��ټ����������" << endl; 
                                               flag=1; 
                                               } 
                               else 
                                     S.V[++S.top[0]] = *x; 
                               if(flag==1) 
                                     break; 
                       } 
} 
else { 
          cout << "��Ҫ�ڴ�ջ�������ݵĸ���" << endl; 
          cin >> j; 
          for (int t = 0;t < j;t++) { 
                        cout << "�����" << (t + 1) << "����" << endl; 
                        cin >> *x; 
                        if (S.top[0] + 1 == S.top[1]){ 
                                      cout <<"˫ջ�������޷����������" << endl; 
                                      flag=1; 
                                     } 
                        else 
                                     S.V[--S.top[1]] = *x; 
                        if(flag==1) 
                              break; 
          } 
} 
delete x; 
system("pause");
 system("cls"); 
}

 //ɾ��ָ���� i ��ջ��ջ��Ԫ�أ��� x ������ֵ 
void DblPop(DblStack &S){ 
                  int i,j; 
                  cout << "����Ҫɾ���ĺ�ջ��ջ��Ԫ" << endl; 
                  cin >> i; 
                  cout << "����Ҫɾ��������" << endl; 
                  cin >> j; 
                   for (int t = 0;t < j;t++) { 
                                if (S.top[i] == S.bot[i]) 
                                               { 
                                                 cout << "��ջ��Ϊ��ջ" << endl; 
                                                 break; } 
                                if (i == 0) 
                                             S.V[S.top[0]--]; 
                                else 
                                             S.V[S.top[1]++]; 
                   } 
                   system("pause"); 
                   system("cls"); 
} 
void PrintDblStack(DblStack &S) { 
                     if (S.top[0] == S.bot[0])
                                 cout << "�� 0 ջΪ��ջ���޷���ӡ" << endl; 
                    else { 
                                 cout << "�� 0 ջ������" << endl; 
                                 for (int i = 0; i < S.top[0] - S.bot[0];i++) 
                                 { 
                                                 cout << S.V[i]; 
                                                 cout << " \t";
                                 }               
                                 cout << endl; 
                    } 
                    if (S.top[1] == S.bot[1]) 
                                  cout << "�� 1 ջΪ��ջ���޷���ӡ" << endl; 
                    else { 
                                  cout << "�� 1 ջ������" << endl; 
                                  for (int i = S.m;i > S.top[1];i--) 
                                  { 
                                             cout << S.V[i - 1]; 
                                             cout << "\t"; 
                                  }  
                                  cout << endl;
                    } 
                    //��ʵ���ӡ����˳�
                                     system("pause");
                                     exit(0); 
} 
int main() { 
                    DblStack S; 
                    int i;
                    while (1) { 
                                  //ShowMenu(); 
                                  cout << "��ѡ����Ĳ���" << endl;
                                  cin >> i;  
                                  switch(i) 
                                   { 
                                                   case 0:{ 
                                                                //��ʼ��˫��ջ 
                                                                InitDblStack(S); 
                                                                break; 
                                                               } 
                                                   case 1:{ 
                                                               //��ջ������� 
                                                               DblPush(S); 
                                                               break; 
                                                               } 
                                                   case 2:{ 
                                                              //ɾ��ջ������ 
                                                              DblPop(S); 
                                                               break;
                                                   }
                                                   case 3:{ 
                                                                //��ӡ����
                                                                 PrintDblStack(S);
                                                                 break; 
                                                                }
                                                 default: 
                                                               break;
                                  } 
                                 } 
                     } 
