#include<stdio.h>
#include<math.h>
int main() {
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=89;
    marks[0][2]=99;

    marks[1][0]=90;
    marks[1][1]=89;
    marks[1][2]=105;

    printf("%d",marks[1][2]);
    // printf("%d\n",sizeof(int));
    // printf("%d\n",sizeof(float));
    // printf("%d",sizeof(char));

    return 0;
}