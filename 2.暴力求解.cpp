#include <bits/stdc++.h>
/*
暴力求解
枚举 所有可能的情况
分析数据量 1000MS~10^7运算
复杂度            数据量 
O(n!)               10
O(2^n)              20
O(n^3)              200
O(n^2)              3000
O(nlogn)            10^6 
O(n)                10^7
O(根号n)            10^14
O(logn)             >10^20

1+2+2^2+…+2^n=O(2^n)
1+1/2+1/2^2+…+1/2^n=O(1)
1+2^2+3^2+…+n^2=O(n^3)
1+1/2+1/3+…+1/n=O(logn)
log1+log2+log3+…+logn=O(nlogn)


*/
using namespace std; 
//int main(){
//	
//	for(int a=0;a<=9;++a){
//		for(int b=0;b<=9;++b){
//			for(int c=0;c<=9;c++){
//				if(100*a+110*b+12*c==532){              //abc+bcc=532 
//					printf("%d %d %d\n",a,b,c);
//				}
//			}
//		}
//	}
//	return 0;
//} 	
	
	int Reverse(int number){
		int reverseNumber = 0;
		while (number!=0){
			reverseNumber *=10;
			reverseNumber +=number%10;
			number /=10;
		}
		return reverseNumber;
	}
	int main(){
		for(int i=1000;i<=9999;i++){
			if(i*9==Reverse(i)){//反序数   
				printf("%d\n",i);
			}
		}
		return 0;
	}


	int Reverse(int number){
		int reverseNumber = 0;
		while (number!=0){
			reverseNumber *=10;
			reverseNumber +=number%10;
			number /=10;
		}
		return reverseNumber;
	}
    int main(){
		for(int i=0;i<=256;i++){
			if(i*i==Reverse(i*i)){//打印所有不超过n（n<256）的，其平方具有对称性质的数。如11*11=121。 
				printf("%d\n",i);
			}
		}
		return 0;
	}

/*
模拟 题目的规定要求
1.图形排版
2.日期问题
3.其他模拟
*/
//图形排版
/*
例2.4 输出梯形
题目描述
输入一个高度h，输出一个高为h，上底边为h的梯形。

输入
一个整数h(1<=h<=1000)。

输出
h所对应的梯形。

样例输入
5
样例输出
          h 
        *****
      *******    row=h   空格个数为 col-(h+2i) 
    *********
  ***********
*************
      col=h+2(h-1) 
*/
int main(){
	int h;
	while(scanf("%d",&h)!=EOF){
		int row = h;
		int col = h+2*(h-1);
		for(int i=0;i<row;i++)
		   for(int j=0;j<col;j++){
		   	if(j<col-(h+2*i)){
		   		printf(" ");
			   }else{
			   	printf("*");
			   }
		   }
		   printf("\n");
	}
} 


/*
例题2.5 叠筐
Problem Description
需要的时候，就把一个个大小差一圈的筐叠上去，使得从上往下看时，边筐花色交错。这个工作现在要让计算机来完成，得看你的了。

Input
输入是一个个的三元组，分别是，外筐尺寸n（n为满足0< n<80的奇整数），中心花色字符，外筐花色字符，后二者都为ASCII可见字符；

Output
输出叠在一起的筐图案，中心花色与外筐花色字符从内层起交错相叠，多筐相叠时，最外筐的角总是被打磨掉。叠筐与叠筐之间应有一行间隔。

Sample Input
11 B A
5 @ W

Sample Output
 AAAAAAAAA 
ABBBBBBBBBA
ABAAAAAAABA
ABABBBBBABA
ABABAAABABA
ABABABABABA
ABABAAABABA
ABABBBBBABA
ABAAAAAAABA
ABBBBBBBBBA
 AAAAAAAAA 

 @@@ 
@WWW@
@W@W@
@WWW@
 @@@ 
*/

#include<stdio.h>
const int MAXN = 80 + 10;

char matrix[MAXN][MAXN];

int main()
{
    int n;          //叠筐尺寸
    char center, outside;      //输入的两个字符
    bool firstcase = true; //第一组数据标志，方便不同组之间换行
    while (scanf("%d %c %c", &n, &center, &outside) != EOF) {      //高版本的VS都会让你用scanf_s来替代scanf
        //1.可以：Alt + F7，打开工程属性，然后找到图片上标注的地方，添加一行内容_CRT_SECURE_NO_DEPRECATE就OK了
       //     2.如果用scanf_s，在读入 % c或者 % s的时候必须多传入一个参数用来指定读取的长度，否则会出错
        if (firstcase == true) {
            firstcase = false;
        }
        else {
            printf("\n");
        }
        for (int i = 0; i <= n / 2; i++) { //(i,i)是每一圈左上角的坐标
            int j = n - 1 - i;            //（j,j)是每一圈右下角的坐标，i+j=n,因为最左上角坐标为（0,0）
            int length = n - 2 * i;         //正方形边长
            char current;                       //求当前圈的填充字符，通过奇偶性判断
            if ((n / 2 - i) % 2 == 0) {
                current = center;
            }
            else {
                current = outside;
            }
            for (int k = 0; k < length; ++k) { //为当前圈赋值
                matrix[i][i + k] = current; //上边赋值
                matrix[i + k][i] = current; //左边赋值
                matrix[j][j - k] = current; //下边赋值
                matrix[j - k][j] = current; //右边赋值
            }
        }
        if (n != 1 ) {                 //剔除四个角，n=1是不用剔除
            matrix[0][0] = ' ';
            matrix[0][n - 1] = ' ';
            matrix[n - 1][0] = ' ';
            matrix[n - 1][n - 1] = ' ';
        }
        for (int i = 0; i < n; i++) {     //逐行逐列打印
            for (int j = 0; j < n; j++) {
                printf("%c", matrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

//日期问题

/*例题2.6 今年的第几天
题目描述
输入年、月、日，计算该天是本年的第几天。

输入描述:
包括三个整数年(1<=Y<=3000)、月(1<=M<=12)、日(1<=D<=31)。

输出描述:
输入可能有多组测试数据，对于每一组测试数据，
输出一个整数，代表Input中的年、月、日对应本年的第几天。

示例1
输入
1990 9 20
2000 5 1

输出
263
122

日期类问题要注意 闰年！
每逢闰年，2月有29天。
闰年的判定规则：当年数不能被100整除时，若其能被4整除；或者能被400整除，为闰年。
注意：闰年并不严格按照每4年一次的规律出现!!

*/
#include<stdio.h>

int day[2][13] = {      //预处理 二维数组
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

bool IsLeapYear(int y) {  //判断是否为闰年！
    return (y % 100 != 0 && y % 4 == 0) || (y % 400 == 0);
}

int main()
{
    int Y, M, D;
    while (scanf_s("%d%d%d", &Y, &M, &D) != EOF) {
        int number = 0;    //记录天数
        int row = IsLeapYear(Y);
        for (int i = 0; i < M; i++) {
            number += day[row][i];
        }
        number += D;
        printf("%d\n", number);
    }
    return 0;
}

/*
2.7 打印日期
题目描述
给出年分m和一年中的第n天，算出第n天是几月几号。

输入描述:
输入包括两个整数y(1<=y<=3000)，n(1<=n<=366)。

输出描述:
可能有多组测试数据，对于每组数据，
按 yyyy-mm-dd的格式将输入中对应的日期打印出来。

示例1
输入
2000 3
2000 31
2000 40
2000 60
2000 61
2001 60

输出
2000-01-03
2000-01-31
2000-02-09
2000-02-29
2000-03-01
2001-03-01

%2d表示输出场宽为2的整数，超过2位按实际数据输出，不够2位右对齐输出，第一位补空格。
%02d表示输出场宽为2的整数，超过2位按实际数据输出，不够2位前置补0.
%5.2f表示输出场宽为5的浮点数，其中小数点后有2位，不够5位右对齐输出。
*/

#include <stdio.h>
int day[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
bool IsLeapYear(int year) {
    return (year % 100 != 0 && year % 4 == 0) || (year % 400 == 0);
}

int main(){
    int year, number;
    int mouth,d;
    while (scanf("%d%d", &year, &number) != EOF) {
        int row = IsLeapYear(year);
        mouth = 0; //初始化月
        while (number > day[row][mouth]) { //确定月
            number -= day[row][mouth];
            mouth++;
        }
        d = number;                       //确定日
        printf("%04d-%02d-%02d\n", year, mouth, d);
    }
    return 0;
}

//其他模拟
/*例题2.9 剩下的树
题目描述
有一个长度为整数L(1<=L<=10000)的马路，可以想象成数轴上长度为L的一个线段，
起点是坐标原点，在每个整数坐标点有一棵树，即在0,1,2，...，L共L+1个位置上有L+1棵树。    
现在要移走一些树，移走的树的区间用一对数字表示，如 100 200表示移走从100到200之间（包括端点）所有的树。     
可能有M(1<=M<=100)个区间，区间之间可能有重叠。现在要求移走所有区间的树之后剩下的树的个数。
1
输入描述:
两个整数L(1<=L<=10000)和M(1<=M<=100)。
接下来有M组整数，每组有一对数字。
1
2
输出描述:
可能有多组输入数据，对于每组输入数据，输出一个数，表示移走所有区间的树之后剩下的树的个数。
1
示例1
输入
500 3
100 200
150 300
470 471

输出
298
*/

#include <iostream>
#include<stdio.h>
const int max = 10001;
bool malu[max];    //bool数组模拟这条线，有树为true，没树为false
int main()
{
    int L, M;
    while (scanf_s("%d%d", &L,&M) != EOF) {
        for (int i = 0; i <= L; i++) {
            malu[i] = true;
        }
        int number = L + 1;  //初始化树的数量
       while(M--){
            int a, b;
            scanf_s("%d%d", &a, &b);
            for (int i = a; i <= b; i++) {
                if (malu[i]) {            //移除该树
                    malu[i] = false;
                    number--;
                }
            }
        }
        printf("%d", number);
    }
    return 0;
}

/*
例题2.10 手机键盘
题目描述
按照手机键盘输入字母的方式，计算所花费的时间 如：a,b,c都在“1”键上，输入a只需要按一次，
输入c需要连续按三次。 如果连续两个字符不在同一个按键上，则可直接按，
如：ad需要按两下，kz需要按6下 如果连续两字符在同一个按键上，
则两个按键之间需要等一段时间，如ac，在按了a之后，需要等一会儿才能按c。
现在假设每按一次需要花费一个时间段，等待时间需要花费两个时间段。 
现在给出一串字符，需要计算出它所需要花费的时间。

输入描述:
一个长度不大于100的字符串，其中只有手机按键上有的小写字母

输出描述:
输入可能包括多组数据，对于每组数据，输出按出Input所给字符串所需要的时间

示例1
输入
bob
www
1
2
输出
7
7

注意
不要想当然认为每个按键3个字母，看一下自己的手机
由于上述原因，每个字母需要的按键次数很难通过数学公式获得，所以可以采用***预处理***的方法。
判断另个字母是否属于同一按键的方法：如果两个字母属于同一按键，
那么两个字母本身之间的间距等于它们的按键次数的差值；不等，则不在同一按键。
*/

#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
int keytab[26] = { 1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4 };

int main()
{
    string str;
    while (cin >> str) {
        int time = 0;
        for (int i = 0; i < str.size(); i++) {
            time += keytab[str[i] - 'a'];    //按键时间
            if (i != 0 && str[i] - str[i - 1] == keytab[str[i] - 'a'] - keytab[str[i - 1] - 'a']) {//根据按键次数相减和按键距离相减的值，这两个值相同就是同一个按键等待时间加2，要不然就是不同按键
                time += 2;            //等待时间2
            }
        }
        printf("%d\n", time);
       
    }
    return 0;
}


/*
例题2.11 xxx定律
题目描述
对于一个数n，如果是偶数，就把n砍掉一半；如果是奇数，把n变成 3*n+ 1后砍掉一半，直到该数变为1为止。     请计算需要经过几步才能将n变到1，具体可见样例。
1
输入描述:
测试包含多个用例，每个用例包含一个整数n,当n为0 时表示输入结束。（1<=n<=10000）
1
输出描述:
对于每组测试用例请输出一个数，表示需要经过的步数,每组输出占一行。
1
示例1
输入
3
1
0
1
2
3
输出
5
0



注意
本题规定了退出条件，因此在编程时需要特别加入判定语句。
*/
#include <stdio.h>

int main()
{
    int n;
    while (scanf_s("%d", &n)!=EOF) {
        if (n == 0) break;  //退出程序判定语句
        int count = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                n = n / 2;
                count++;
            }
            else {
                n = (3 * n + 1) / 2;
                count++;
            }
        }
        printf("%d\n", count);
    }
    
}
