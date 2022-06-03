#include <stdio.h>

int main(void) {
  
 int height, space, current_height, star;
 scanf("%d",&height);
 space = height - 1;
 star = 1;
 current_height = 1;
 while(1){
   for(int i = space; i>0; i--){
     printf(" ");
   }
   while(star>0){
     printf("*");
     star--;
   }
   printf("\n");
   current_height++;
   star = current_height;
   space-=1;
   
   if(current_height == height+1){
     break;
   }
 }
 return(0);
}
