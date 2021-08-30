#include <iostream>
#include "kitty.hpp"

kitty::kitty(){
  std::cout << "Constructor" << std::endl;
  variable = 100;
}

kitty::~kitty(){
  std::cout << "Destructor" << std::endl;
  variable = 0;
}

void kitty::speak(){
  std::cout << "I'm a cat." << std::endl;
}