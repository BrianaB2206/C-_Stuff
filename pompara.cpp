#include <iostream>
#include <string>

template <class T>
T fcn(T a, T b) {
 return a > b ? a : b;
}

int main() {
 std::cout << fcn<int>(2, 1) << std::endl;     // 2

 std::string foo="foo", bar="bar"; 
 std::cout << fcn<std::string>(foo, bar) << std::endl; // "foo"
}