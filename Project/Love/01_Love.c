#include <stdio.h>

void displayHeart()
{
    printf("  ***     ***   \n");
    printf(" *****   *****  \n");
    printf("******* ******* \n");
    printf(" *************  \n");
    printf("  ***********   \n");
    printf("    *******     \n");
    printf("      ***       \n");
    printf("       *        \n");
}

int main()
{
    char name[] = "Riddhi";
    char birthdate[] = "26-10-2000";

    printf("\n\n");
    displayHeart();
    printf("\nDear %s,\n", name);
    printf("You are the love of my life!\n");
    printf("Your special day, %s, means the world to me.\n", birthdate);
    printf("I love you forever! \n");
    printf("\t -From Chirag Thanki");

    return 0;
}