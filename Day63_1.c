/*
Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5
Explanation 1:
4th smallest element in the given array is 5.
Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7
Explanation 2:
3rd smallest element in the given array is 7.
*/

#include <stdio.h>
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main(){
    int n;
    printf("arr size = ");
    scanf("%d", &n);
    int arr[n];
    printf("arr elements = ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    printf("k = ");
    scanf("%d", &k);
    quickSort(arr, 0, n - 1);
    if(k > 0 && k <= n){
        printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
    } else {
        printf("Invalid value of k\n");
    }
    return 0;
}