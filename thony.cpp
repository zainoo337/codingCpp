#include <iostream>
// Generic multiply function using decltype to deduce the return type
template <typename T, typename U>
auto multiply(T t, U u) -> decltype(t * u) {
return t * u;
}
int main() {
int a = 5;
double b = 2.5;
// The compiler deduces that the result is of type double
auto result = multiply(a, b);
std::cout << a << " * " << b << " = " << result << std::endl;
return 0;
}
