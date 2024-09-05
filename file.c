#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "a");
    fprintf(fptr,"%c",'m');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'g');
    fprintf(fptr,"%c",'o');
    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("character =%c\n", ch);
    // fclose(fptr);
    return 0;
}
//  if (fptr == NULL)
//     {
//         printf("file doesnot exits\n");
//     }
//     else
//     {
//         fclose(fptr);
//     }
