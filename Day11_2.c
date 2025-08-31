//Q22 Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float cp, sp, profit, loss;
    
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    
    if(sp > cp) {
        profit = sp - cp;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", (profit / cp) * 100);
    } else if(cp > sp) {
        loss = cp - sp;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", (loss / cp) * 100);
    } else {
        printf("No Profit No Loss\n");
    }
    
    getchar();
    getchar();
    return 0;
}