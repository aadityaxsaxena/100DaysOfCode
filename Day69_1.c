/*
Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
Input 1:
nums1 = [1,3,3,4]
Output 1:
3
Input 2:
nums1 = [1,2,2]
Output 2:
2
Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1
*/

#include <stdio.h>
int main(){
    int n;
    printf("arr size = ");
    scanf("%d", &n);
    int arr[n];
    printf("arr elements = ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int repeated = -1;
    for(int i = 0; i < n; i++){
        int index = arr[i] < 0 ? -arr[i] : arr[i];
        if(arr[index] < 0){
            repeated = index;
            break;
        } else {
            arr[index] = -arr[index];
        }
    }
    if(repeated != -1){
        printf("repeated element = %d\n", repeated);
    } else {
        printf("No repeated element \n");
    }
    return 0;
}