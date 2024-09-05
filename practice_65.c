#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float *)malloc(5*sizeof(float));
    ptr[0]=5.95;
    ptr[1]=89.99;
    ptr[2]=999.99;
    ptr[3]=64.025;
    ptr[4]=76.625;
    for(int i = 0; i<5;i++){
        printf("%f\n",ptr[i]);
    }
    return 0;
}