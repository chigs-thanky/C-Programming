#include <stdio.h>

enum trafficLight
{
    RED,
    YELLOW,
    GREEN
};
int main()
{
    enum trafficLight lightColor;
    printf("Enter light color: 0 for RED, 1 for YELLOW, 2 for GREEN\n");
    scanf("%d", &lightColor);
    switch (lightColor)
    {
    case RED:
        printf("STOP!");
        break;
    case YELLOW:
        printf("READY!");
        break;
    case GREEN:
        printf("GO!");
        break;

    default:
        break;
    }
    return 0;
}