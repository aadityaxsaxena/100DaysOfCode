//Q69 Find the second largest element in an array.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int first=a[0], second=-1e9;
    for(int i=1;i<n;i++){
        if(a[i]>first){
            second=first;
            first=a[i];
        } else if(a[i]>second && a[i]<first){
            second=a[i];
        }
    }
    printf("%d",second);
    getchar();
    getchar();
    return 0;
}