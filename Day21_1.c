//Q41 Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int num, first, last, temp, divisor = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;        
    temp = num;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first = temp;        
    num = num % divisor;   
    num = num / 10;         
    int swapped = last * divisor + num * 10 + first;
    printf("Number after swapping first and last digit: %d\n", swapped);
    getchar();
    getchar();
    return 0;
}