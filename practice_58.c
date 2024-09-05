#include<stdio.h>
#include<string.h>

struct complex{
    int real;
    int img;
};
int main(){
    struct complex number1={3,5};
    struct complex *ptr =&number1;
    printf("real is : %d\n",ptr->real);
    printf("img is: %d",ptr->img);
    return 0;
}