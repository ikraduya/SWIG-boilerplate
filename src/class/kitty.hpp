#include <iostream>

class kitty {
 public:
  kitty();
  ~kitty();

  void speak();  
  void speak2(){ std::cout << "totes works" << std::endl; }

  int pub_vab = 10;
 private:
  int variable;

};