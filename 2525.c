#include <stdio.h>

int main(void) {
  int A, B, C, D;
  scanf("%d %d %d", &A, &B, &C);
  if(A>=0 && A<=23 && B>=0 && B<=59 && C>=0 && C<=1000){
    B = B + C;
    if(B>=60){
      D = B/60;
      B = B % 60;
      A = A + D;
    }
    if(A>=24){
      A= A-24;
    }
  }
  printf("%d %d", A, B);

  return 0;
}
