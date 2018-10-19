#include <iostream>
#include "plugins/message.hpp"

int main( int, char const *[] )
{
  std::cout << "hello warp-native\n";
  std::cout << "-----------------\n";

  std::cout << message{ "How are you doing?\n" };
}
