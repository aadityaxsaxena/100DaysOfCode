/*
Print all enum names and integer values using a loop.
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
Explanation 1:
Iterating through enum values prints each constant with its assigned integer.
*/
#include <stdio.h>
enum Color {
    RED,
    YELLOW,
    GREEN
};
int main() {
    for (int i = RED; i <= GREEN; i++) {
        switch (i) {
            case RED:
                printf("RED=%d\n", RED);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", YELLOW);
                break;
            case GREEN:
                printf("GREEN=%d\n", GREEN);
                break;
        }
    }
    return 0;
}