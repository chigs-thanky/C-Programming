#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("filehandlingChirag.txt", "r");
    char content[100];
    // To get the content of one first single line
    fgets(content, 100, fptr);
    printf("%s", content);

    // To get the content of all lines
    /*
    while (fgets(content, 100, fptr))
    {
        printf("%s", content);
    }*/

    fclose(fptr);
    return 0;
}