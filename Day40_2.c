/*
Multiply two matrices.
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154
*/

#include <stdio.h>
int main(){
  int n, m;
  scanf("%d %d", &n, &m);
  int a[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d", &a[i][j]);
    }
  }
  int p, q;
  scanf("%d %d", &p, &q);
  int b[p][q];
  for(int i=0; i<p; i++){
    for(int j=0; j<q; j++){
      scanf("%d", &b[i][j]);
    }
  }
  if(m != p){
    printf("Error: %d != %d\n", m, p);
    return 0;
  }
  int c[n][q];
  for(int i=0; i<n; i++){
    for(int j=0; j<q; j++){
      c[i][j] = 0;
      for(int k=0; k<m; k++){
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<q; j++){
      printf("%d", c[i][j]);
      if(j < q-1) printf(" ");
    }
    printf("\n");
  }
  return 0;
}