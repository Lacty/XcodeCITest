
#include <iostream>


void fizzBuzz(int i, int end) {
  if      (!(i % 15)) { std::cout << "FizzBuzz" << std::endl; }
  else if (!(i % 3))  { std::cout << "Fizz"     << std::endl; }
  else if (!(i % 5))  { std::cout << "Buzz"     << std::endl; }
  else                { std::cout << i          << std::endl; }
  if      (++i < end) { fizzBuzz(i, end); }
}

int main() {
  fizzBuzz(1, 50);
}
