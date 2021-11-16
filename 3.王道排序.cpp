/*
排序与查找、
排序   无序->有序  
sort()          基于快速排序 
sort 分为3个参数   1.first 起始位置  2.last 终止位置  3.comp 比较函数 
排序 内定义数据类型 自定义数据类型 
1.基础排序
2.扩展排序
3.基础查找
*/ 


/*
例题3.1 排序  (内定义数据类型)
题目描述
对输入的n个数进行排序并输出。

输入描述:
输入的第一行包括一个整数n(1<=n<=100)。
接下来的一行包括n个整数。

输出描述:
可能有多组测试数据，对于每组数据，将排序后的n个整数输出，每个数后面都有一个空格。
每组测试数据的结果占一行。

样例输入：
4
1 4 3 2

样例输出
1 2 3 4 
*/ 

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100 + 10;

int arr[MAXN];

bool cmp1(int a,int b)//int为数组数据类型    降序函数 
{
    return a>b;//降序排列
    //return a<b;//默认的升序排列
}
int main()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        sort(arr,arr+n);//sort(起始位置，末尾，比较函数，不填默认升序）
        //sort(arr,arr+n,cmp1);//降序 
		for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n"); 
    }
    return 0;
}

/* (内定义数据类型) 学生甲和学生乙不能直接比较
1.设计比较函数
2.定义大小关系

例题3.2 成绩排序
题目描述
用一维数组存储学号和成绩，然后，按成绩排序输出。

输入描述:
输入第一行包括一个整数N(1<=N<=100)，代表学生的个数。
接下来的N行每行包括两个整数p和q，分别代表每个学生的学号和成绩。

输出描述:
按照学生的成绩从小到大进行排序，并将排序后的学生信息打印出来。
如果学生的成绩相同，则按照学号的大小进行从小到大排序。

示例1
输入
3
1 90
2 87
3 92
输出
2 87
1 90
3 92


注意：对一组基本类型进行排序。首先，需要将这一组基本类型构建为一个结构体或类，然后对结构体或类进行排序。
上述代码还定义了一个比较函数compare,这个比较函数实现了题目中的排序原则。在遇到新的排序规则时，
//只需要记住这条黄金法则：当比较函数的返回值为true时，表示的是比较函数的第一个参数将会排在第二个参数前面。
*/ 
//方法一  设计比较函数
#include <bits/stdc++.h>
using namespace std;
struct student {
    int number;
    int score;
};
const int maxn = 100;

student arr[maxn];

bool compare(student x,student y) {
    if (x.score == y.score) {
        return x.number < y.number;
    }
    else {
        return x.score < y.score;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &arr[i].number, &arr[i].score);
    }
    sort(arr, arr + n, compare); //按照比较函数排序
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", arr[i].number, arr[i].score);
    }
    return 0;
}
//方法二  定义大小关系
#include <bits/stdc++.h>
using namespace std;
struct student {
    int number;
    int score;
    bool operator< (student student) const{
	if(score==student.score){
		return number < student.number;
	}else{
		return score < student.score;
	}
	} 
};
const int maxn = 100;

student arr[maxn];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &arr[i].number, &arr[i].score);
    }
    sort(arr, arr + n); 
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", arr[i].number, arr[i].score);
    }
    return 0;
}

/*例题3.3整数奇偶排序
描述
给定10个整数的序列，要求对其重新排序。排序要求:

1.奇数在前，偶数在后；

2.奇数按从大到小排序；

3.偶数按从小到大排序。

输入
输入一行，包含10个整数，彼此以一个空格分开，每个整数的范围是大于等于0，小于等于100。
输出
按照要求排序后输出一行，包含排序后的10个整数，数与数之间以一个空格分开。
样例输入
4 7 3 13 11 12 0 47 34 98
样例输出
47 13 11 7 3 0 4 12 34 98*/

#include <bits/stdc++.h>
using namespace std;

int arr[10];

//bool Compare(int x,int y){
//	if(x % 2 == 1 && y % 2== 1){
//	return y < x;
//}else if(x % 2 == 0 && y % 2 == 0){
//	return x < y;
//}else if(x % 2 == 1 && y % 2 == 0){
//	return true;        //确实x在前y在后 
//}else{
//	return false;
//}
//}
bool Compare(int x,int y){
	if(x % 2 == 1 && y % 2== 1){
	return y < x;                   //从大到小 排序 
	}
	else if(x % 2 == 0 && y % 2 == 0){
	return x < y;                   //从小到大 排序 
    }
	else{
	return x % 2 > y % 2;
    }
}

int main(){
	while(scanf("%d",&arr[0])!=EOF){
		for(int i=1; i<10;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+10,Compare);
		for(int i=1; i<10;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	return 0;
}



/*
排序算法的特征
线性排序 -> 计数排序
逆序数对 -> 归并排序
第K大数 -> 快速排序 
*/ 
