#include <iostream>
#include <algorithm>
using namespace std;

long long  greatest_common_divisor(int a, int b) {
  return b == 0 ? a : __gcd(b, a % b);
}
long long  least_common_multiple(long a, long b) {
    return (a * b) / greatest_common_divisor(a, b);
  }
int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << least_common_multiple(a, b) << '\n';
  return 0;
}