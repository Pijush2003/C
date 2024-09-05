#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr =fopen("test.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    int m;
    fscanf(fptr,"%d",&m);
    fclose(fptr);
    fptr = fopen("test.txt","w");
    fprintf(fptr,"%d",n+m);
    fclose(fptr);
    return 0;
}