#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 1557;
    s1.cgpa = 9.01;
    strcpy(s1.name,"pijush kanti adak");
    printf("student name: %s\n",s1.name);
    printf("students roll no: %d\n",s1.roll);
    printf("students cgpa: %f\n",s1.cgpa);

    struct student s2;
    s2.roll = 1558;
    s2.cgpa = 8.99;
    strcpy(s2.name,"rakesh biswas");
    printf("student name: %s\n",s2.name);
    printf("students roll no: %d\n",s2.roll);
    printf("students cgpa: %f\n",s2.cgpa);

    struct student s3;
    s3.roll = 1560;
    s3.cgpa = 9.77;
    strcpy(s3.name,"somnath das");
    printf("student name: %s\n",s3.name);
    printf("students roll no: %d\n",s3.roll);
    printf("students cgpa: %f\n",s3.cgpa);

    return 0;
}