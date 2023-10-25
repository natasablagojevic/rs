#include "razlomak.hpp"
#include<iostream>

int main()
{
  Razlomak f1(3, 4);
  Razlomak f2(5);
  Razlomak f3;

  std::cout << f1 << std::endl;  

  std::cin >> f3;

  /**
   * Operator + mozeo da shatimo kao da se poziva nad prvim 
   * argumentom, kao metod klase je, a njemu se prosledjuje drugi
   * razlomak kojeg prima
   */
  std::cout << f1 + f2 << std::endl;
  std::cout << f1.operator+(f2) << std::endl;

  return 0;
}