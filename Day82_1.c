/*
Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
Input 1:
GREEN
Output 1:
Go
Explanation 1:
When the enum value is GREEN, the program prints 'Go'
*/
#include <stdio.h>
#include <string.h>
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;
void traflight(TrafficLight light) {
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light\n");
            break;
    }
}
int main() {
    char input[10];
    printf("Traffic light colour(RED/YELLOW/GREEN) = ");
    scanf("%s", input);
    TrafficLight light;
    if (strcmp(input, "RED") == 0) {
        light = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
    } else {
        printf("Invalid input\n");
        return 1;
    }
    traflight(light);
    return 0;
}