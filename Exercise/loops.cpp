
// LOOPS'

#include <iostream>

int main()
{
  for (int i = 0; i < 5; ++i)
  {
    std::cout << "Iteration " << i << std::endl;
  }

  return 0;
}
#include <iostream>

int main()
{
  int i = 0;
  while (i < 5)
  {
    std::cout << "Iteration " << i << std::endl;
    ++i;
  }

  return 0;
}
// #include <iostream>

// int main() {
//     int i = 0;
//     do {
//         std::cout << "Iteration " << i << std::endl;
//         ++i;
//     } while (i < 100);

//     return 0;
// }