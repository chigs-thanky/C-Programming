#include <stdio.h>

int main() {
    int num;
    printf("Enter matrix size: \n");
    scanf("%d", &num);
    for (int row = 0; row < num; row++){
        for (int col = 0; col < num; col++){
            printf("# ");
        }
        printf("\n");
    }
    return 0;
}
