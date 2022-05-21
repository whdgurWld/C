#include <stdio.h>

int main(void) {
  int input;
  int tenth = 1;
  int first = 1;
  int add = 1;
  int new_num = 1;
  int input_save;
  int tries = 0;
  
  scanf("%d", &input);

  input_save = input;

  while(new_num != input_save){
    tenth = input/10;
    first = input % 10;
    add = (tenth+first) % 10;
    new_num = (first*10) + add;
    input = new_num;
    tries++;
  }
  printf("%d", tries);
}
