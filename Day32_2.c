//Q64 Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    long long num;
    int freq[10] = {0}; 
    int digit, maxFreq = 0, result = 0;
    scanf("%lld", &num);
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }
    printf("%d\n", result);
    getchar();
    getchar();
    return 0;
}