#include <stdio.h>

int main(void) {

 int arrnum;
 int num;
 int highest=-1000000;
 int lowest= 1000000;
 scanf("%d", &arrnum);

 int fun[arrnum];
  
 for(int i = 0; i<arrnum; i++){
   scanf("%d", &fun[i]);

   if(fun[i]>= highest){
     highest = fun[i];
   }
   if(fun[i]<= lowest){
     lowest = fun[i];
   }
 }
 
 printf("%d %d", lowest, highest); 
 return(0);
}
