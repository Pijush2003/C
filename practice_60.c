#include<stdio.h>
#include<string.h>

typedef struct account
{
    int accno;
    char name[100];
    
}acc;
int main(){
    acc acc1={564779,"PIJUSH KANTI ADAK"};
    printf("account no is :%d\n",acc1.accno);
    printf("account holders name is: %s",acc1.name);
    
    return 0;
}