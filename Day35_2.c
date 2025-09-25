//Q70 Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n,k;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    k=k%n;
    for(int i=0;i<n;i++) b[(i+k)%n]=a[i];
    for(int i=0;i<n;i++) printf("%d ",b[i]);
    getchar();
    getchar();
    return 0;
}