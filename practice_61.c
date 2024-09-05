#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    int ch;
    fscanf(fptr, "%d", &ch);
    printf("1st Integer is : %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("2nd Integer is : %d\n", ch);

    fscanf(fptr, "%d", &ch);
    printf("3rd Integer is : %d\n", ch);

    fscanf(fptr, "%d", &ch);
    printf("4th Integer is : %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("5th Integer is : %d", ch);

    fclose(fptr);
    return 0;
}