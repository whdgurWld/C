#include <stdio.h>

int main(void) {
 int A,B,C, mul, num0=0, num1=0, num2=0, num3=0, num4=0, num5=0, num6=0, num7=0, num8=0, num9=0;
  
 scanf("%d %d %d", &A, &B, &C);
 if(A>=100 && A<1000 && B>=100 && B<1000 && C>=100 && C<1000){
  mul = A*B*C;
  printf("%d\n", mul);
 } 
 int step[30] = {0,0,0,0,0,0,0,0,0,100000000, 10000000, 1000000, 100000, 10000, 1000, 100, 10, 1}; 
 int count[30] = {};
  
 for(int i = 9; i <= 17; i++){
   count[i] = mul/step[i];
   if(count[i]>0){
     count[i]-= (count[i-9]*1000000000);
     count[i]-= (count[i-8]*100000000);
     count[i]-= (count[i-7]*10000000);
     count[i]-= (count[i-6]*1000000);
     count[i]-= (count[i-5]*100000);
     count[i]-= (count[i-4]*10000);
     count[i]-= (count[i-3]*1000);
     count[i]-= (count[i-2]*100);
     count[i]-= (count[i-1]*10);
     
     if(count[i] == 0){
       num0++;
     }
     if(count[i] == 1){
       num1++;
     }
     if(count[i] == 2){
       num2++;
     }
     if(count[i] == 3){
       num3++;
     }
     if(count[i] == 4){
       num4++;
     }
     if(count[i] == 5){
       num5++;
     }
     if(count[i] == 6){
       num6++;
     }
     if(count[i] == 7){
       num7++;
     }
     if(count[i] == 8){
       num8++;
     }
     if(count[i] == 9){
       num9++;
     }
   }
 }

 printf("%d\n", num0);
 printf("%d\n", num1);
 printf("%d\n", num2);
 printf("%d\n", num3);
 printf("%d\n", num4);
 printf("%d\n", num5);
 printf("%d\n", num6);
 printf("%d\n", num7);
 printf("%d\n", num8);
 printf("%d\n", num9);

 return(0);
}
