#include <iostream>
int main() {
  int i = 0;
  // i先和1比较，再自增
  while (i++ < 1) {
    printf("i is: %d\n", i);
  }
  // i先自增，再和1比较
  while (++i < 1) {
    printf("i is: %d\n", i);
  }
  return 0;
}