/*
��������ҡ�
����   ����->����  
sort()          ���ڿ������� 
sort ��Ϊ3������   1.first ��ʼλ��  2.last ��ֹλ��  3.comp �ȽϺ��� 
���� �ڶ����������� �Զ����������� 
1.��������
2.��չ����
3.��������
*/ 


/*
����3.1 ����  (�ڶ�����������)
��Ŀ����
�������n�����������������

��������:
����ĵ�һ�а���һ������n(1<=n<=100)��
��������һ�а���n��������

�������:
�����ж���������ݣ�����ÿ�����ݣ���������n�����������ÿ�������涼��һ���ո�
ÿ��������ݵĽ��ռһ�С�

�������룺
4
1 4 3 2

�������
1 2 3 4 
*/ 

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100 + 10;

int arr[MAXN];

bool cmp1(int a,int b)//intΪ������������    ������ 
{
    return a>b;//��������
    //return a<b;//Ĭ�ϵ���������
}
int main()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        sort(arr,arr+n);//sort(��ʼλ�ã�ĩβ���ȽϺ���������Ĭ������
        //sort(arr,arr+n,cmp1);//���� 
		for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n"); 
    }
    return 0;
}

/* (�ڶ�����������) ѧ���׺�ѧ���Ҳ���ֱ�ӱȽ�
1.��ƱȽϺ���
2.�����С��ϵ

����3.2 �ɼ�����
��Ŀ����
��һά����洢ѧ�źͳɼ���Ȼ�󣬰��ɼ����������

��������:
�����һ�а���һ������N(1<=N<=100)������ѧ���ĸ�����
��������N��ÿ�а�����������p��q���ֱ����ÿ��ѧ����ѧ�źͳɼ���

�������:
����ѧ���ĳɼ���С����������򣬲���������ѧ����Ϣ��ӡ������
���ѧ���ĳɼ���ͬ������ѧ�ŵĴ�С���д�С��������

ʾ��1
����
3
1 90
2 87
3 92
���
2 87
1 90
3 92


ע�⣺��һ��������ͽ����������ȣ���Ҫ����һ��������͹���Ϊһ���ṹ����࣬Ȼ��Խṹ������������
�������뻹������һ���ȽϺ���compare,����ȽϺ���ʵ������Ŀ�е�����ԭ���������µ��������ʱ��
//ֻ��Ҫ��ס�����ƽ��򣺵��ȽϺ����ķ���ֵΪtrueʱ����ʾ���ǱȽϺ����ĵ�һ�������������ڵڶ�������ǰ�档
*/ 
//����һ  ��ƱȽϺ���
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
    sort(arr, arr + n, compare); //���ձȽϺ�������
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", arr[i].number, arr[i].score);
    }
    return 0;
}
//������  �����С��ϵ
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

/*����3.3������ż����
����
����10�����������У�Ҫ�����������������Ҫ��:

1.������ǰ��ż���ں�

2.�������Ӵ�С����

3.ż������С��������

����
����һ�У�����10���������˴���һ���ո�ֿ���ÿ�������ķ�Χ�Ǵ��ڵ���0��С�ڵ���100��
���
����Ҫ����������һ�У�����������10��������������֮����һ���ո�ֿ���
��������
4 7 3 13 11 12 0 47 34 98
�������
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
//	return true;        //ȷʵx��ǰy�ں� 
//}else{
//	return false;
//}
//}
bool Compare(int x,int y){
	if(x % 2 == 1 && y % 2== 1){
	return y < x;                   //�Ӵ�С ���� 
	}
	else if(x % 2 == 0 && y % 2 == 0){
	return x < y;                   //��С���� ���� 
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
�����㷨������
�������� -> ��������
�������� -> �鲢����
��K���� -> �������� 
*/ 
