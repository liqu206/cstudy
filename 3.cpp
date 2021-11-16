#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    int value;
    struct node *next;
    /* data */
};
int main(){
    node* head = (node*)malloc(sizeof(node));
    node* flag = head;
    scanf("%d",&flag->value);
    while (flag->value !=0)
    {
        flag->next=(node*)malloc(sizeof(node));
        flag=flag->next;
        scanf("%d",&flag->value);
        /* code */
    }
    flag->next=NULL;
    flag=head;
    while (flag!=NULL)
    {
        printf("%d ",flag->value);
        flag=flag->next;
        /* code */
    }
    
    
    return 0;
}
