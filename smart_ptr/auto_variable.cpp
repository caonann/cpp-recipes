#include <iostream>

int main() {
  //本质上没有区别，只是编程风格不同
  auto p = new int(1);
  std::cout << typeid(p).name() << std::endl;

  auto* q = new int(1);
  std::cout << typeid(q).name() << std::endl;

  return 0;
}