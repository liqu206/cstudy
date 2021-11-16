#include <iostream>
using namespace std; 
typedef struct { 
        int top[2], bot[2];
        int *V; int m; 
}DblStack; 
//初始化一个大小为 m 的双向栈 
void InitDblStack(DblStack &S) { 
         cout << "请输入双栈的大小" << endl; 
         cin >> S.m;
        //动态分配一个最大容量为 m 的数组空间
        S.V = new int[S.m]; 
        //左栈栈底指针 
        S.bot[0] = -1;
        //右栈栈底指针 
        S.bot[1] = S.m;
        //左栈栈顶指针 
        S.top[0] = -1; 
        //右栈栈顶指针 
        S.top[1] = S.m; 
        system("pause"); 
        system("cls"); 
} 
//向指定的 i 号栈中插入元素 
void DblPush(DblStack &S) { 
               int i = 0; 
               int j = 0;  
               int flag=0;
               int *x = new int(); 
               cout << "请输入您要插入数据的栈号" << endl; 
               cin >> i; 
               //判断栈号是否输入错误 
               if (i < 0 || i>1) 
                          cout << "栈号输入错误" << endl; 
               //向 0 栈插入数据，反之向 1 栈插入数据 
               if (i == 0) { 
                        cout << "您要在此栈插入数据的个数" << endl; 
                        cin >> j; 
                        for (int t = 0;t < j;t++) { 
                                cout << "插入第" << (t + 1) << "个数" << endl; 
                                cin >> *x; 
                                //判断栈是否已满 
                               if (S.top[0] + 1 == S.top[1]) { 
                                               cout << "双栈已满，无法再继续添加数据" << endl; 
                                               flag=1; 
                                               } 
                               else 
                                     S.V[++S.top[0]] = *x; 
                               if(flag==1) 
                                     break; 
                       } 
} 
else { 
          cout << "您要在此栈插入数据的个数" << endl; 
          cin >> j; 
          for (int t = 0;t < j;t++) { 
                        cout << "插入第" << (t + 1) << "个数" << endl; 
                        cin >> *x; 
                        if (S.top[0] + 1 == S.top[1]){ 
                                      cout <<"双栈已满，无法插入该数据" << endl; 
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

 //删除指定的 i 号栈的栈顶元素，用 x 返回其值 
void DblPop(DblStack &S){ 
                  int i,j; 
                  cout << "您需要删除哪号栈的栈顶元" << endl; 
                  cin >> i; 
                  cout << "您需要删除几个数" << endl; 
                  cin >> j; 
                   for (int t = 0;t < j;t++) { 
                                if (S.top[i] == S.bot[i]) 
                                               { 
                                                 cout << "该栈已为空栈" << endl; 
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
                                 cout << "第 0 栈为空栈。无法打印" << endl; 
                    else { 
                                 cout << "第 0 栈的数据" << endl; 
                                 for (int i = 0; i < S.top[0] - S.bot[0];i++) 
                                 { 
                                                 cout << S.V[i]; 
                                                 cout << " \t";
                                 }               
                                 cout << endl; 
                    } 
                    if (S.top[1] == S.bot[1]) 
                                  cout << "第 1 栈为空栈。无法打印" << endl; 
                    else { 
                                  cout << "第 1 栈的数据" << endl; 
                                  for (int i = S.m;i > S.top[1];i--) 
                                  { 
                                             cout << S.V[i - 1]; 
                                             cout << "\t"; 
                                  }  
                                  cout << endl;
                    } 
                    //本实验打印后就退出
                                     system("pause");
                                     exit(0); 
} 
int main() { 
                    DblStack S; 
                    int i;
                    while (1) { 
                                  //ShowMenu(); 
                                  cout << "请选择你的操作" << endl;
                                  cin >> i;  
                                  switch(i) 
                                   { 
                                                   case 0:{ 
                                                                //初始化双向栈 
                                                                InitDblStack(S); 
                                                                break; 
                                                               } 
                                                   case 1:{ 
                                                               //给栈添加数据 
                                                               DblPush(S); 
                                                               break; 
                                                               } 
                                                   case 2:{ 
                                                              //删除栈中数据 
                                                              DblPop(S); 
                                                               break;
                                                   }
                                                   case 3:{ 
                                                                //打印数据
                                                                 PrintDblStack(S);
                                                                 break; 
                                                                }
                                                 default: 
                                                               break;
                                  } 
                                 } 
                     } 
