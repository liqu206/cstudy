/*
1.1顺序表
1.1.1 顺序表定义

*/

//静态定义
#define Maxsize 50
typedef struct 
{
    int data[Maxsize];
    int length;
}Sqlist;

//动态定义
#define InitSize 100
typedef struct 
{
    int *data;
    int MaxSize,length;
}Seqlist;

/*
1.1.2 顺序表基本操作
*/

//插入
bool ListInsert(Sqlist &L,int i,int e){
    //将元素e插入到顺序表L中的第i个位置
    if(i<1||i>L.length+1)
    return false;
    if(L.length>=Maxsize)
    return false;
    for(int j=L.length;j>=i;j--)//将第i个元素及之后元素后移
        L.data[j]=L.data[j-1];
    L.data[i-1]=e;  //位置i放e
    L.length++;
    return true;
}

//删除
bool ListDelete(Sqlist &L,int i,int &e){
    if(i<1||i>L.length)
    return false;
    e=L.data[i-1];
    for(int j=i;j<L.length;j++)
       L.data[i-1]=L.data[j];
    L.length--;
    return true;
}
