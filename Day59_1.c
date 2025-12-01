/*
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700
Explanation 1:
arr2 + arr3 = 700, which is maximum.
Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39
Explanation 2:
arr1 + arr2 + arr3 + arr4 = 39, which is maximum.
Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400
Explanation 3:
arr3 = 400, which is maximum.
*/

#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("k =  ");
    scanf("%d", &k);
    int currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    int maxSum = currentSum;
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);
    return 0;
}