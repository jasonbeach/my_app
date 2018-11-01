#include <iostream>
#include "version.hpp"
#include "foo.hpp"


int main()
{
  std::string git_version = version::git_hash();
  std::cout << "Git version: " << git_version << std::endl;


  Foo bar;

  bar.set_number(5);

  std::cout << "bar number: " << bar.get_number() << std::endl;

  return 1;
}
