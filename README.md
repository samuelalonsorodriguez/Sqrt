# Sqrt
Alice Sqrt

# Location
"base_alice"\Math\Arithmetic\Sqrt.hpp

# Requirements
Inline: 
Types: 
Intrinsics: 

# Namespace
Alice::Math::Arithmetic

# Description
Computes the square root of a floating-point value

# Functions (2)
1º:

f32 Sqrt(f32) -> Computes the square-root of a ``f32`` value and returns the result in an ``f32``

Usage¬
```
#include <iostream>
#include <Math\Arithmetic\Sqrt.hpp>

int main()
{
  std::cout << Alice::Math::Arithmetic::Sqrt(9.0f);

  std::cout << "\n\nPress any key to exit..." << std::endl;
  char c;
  std::cin >> c;
  return 0;
}
```

2º:

f64 Sqrt(f64) -> Computes the square-root of a ``f64`` value and returns the result in an ``f64``

Usage¬
```
#include <iostream>
#include <Math\Arithmetic\Sqrt.hpp>

int main()
{
  std::cout << Alice::Math::Arithmetic::Sqrt(9.0);

  std::cout << "\n\nPress any key to exit..." << std::endl;
  char c;
  std::cin >> c;
  return 0;
}
```
