#include <iostream>
#include <tuple>

int main() {
  int a = 10;
  double b = 3.14;
  char c = 'y';

  // 使用 std::tie 绑定变量到元组
  auto my_tuple = std::tie(a, b, c);

  // 使用 std::make_tuple 创建元组
  auto another_tuple = std::make_tuple(20, 4.5, 'z');

  // 修改元组中的值
  std::get<0>(my_tuple) = 100;
  std::get<1>(another_tuple) = 9.99;

  // 输出元组中的值
  std::cout << std::get<0>(my_tuple) << ", " << std::get<1>(my_tuple) << ", " << std::get<2>(my_tuple) << std::endl;
  std::cout << std::get<0>(another_tuple) << ", " << std::get<1>(another_tuple) << ", " << std::get<2>(another_tuple)
            << std::endl;

  return 0;
}