#include <stdio.h>

int main()
{
    FILE *fptr;
    // Creating a file
    // fptr = fopen("firstfilehandlingprogram.txt", "w");
    // fprintf(fptr, "Hello World!");

    // Adding content to existing file
    fptr = fopen("filehandlingChirag.txt", "a");
    fprintf(fptr, "\nUSA is the ultimate superpower.");
    fclose(fptr);

    return 1;
}