#include <stdio.h>

int main()
{
    int num;
    char name;
    char fullName[30];
    printf("Enter a number and a letter: ");
    scanf("%d %c", &num, &name);
    printf("Entered number: %d and letter: %c\n", num, name);

    // To take user input as full name with spaces, use fgets() instead of scanf()
    printf("Enter your full name: ");
    getchar();
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s!", fullName);
    return 0;
}