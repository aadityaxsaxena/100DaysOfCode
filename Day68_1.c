/*
Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
Input 1:
nums1 = [0,3,2,4]
Output 1:
1
Input 2:
nums1 = [1,2,3]
Output 2:
0
Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2
*/

#include <stdio.h>
int main() {
    int n;
    printf("arr size = ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("arr elements between 0 to %d except one = ", n - 1, n - 1);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    int total_sum = n * (n - 1) / 2;
    int arr_sum = 0;
    for(int i = 0; i < n - 1; i++) {
        arr_sum += arr[i];
    }
    int missing_number = total_sum - arr_sum;
    printf("%d", missing_number);
    return 0;
}
