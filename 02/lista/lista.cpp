#include "lista.hpp"
#include<iostream>

std::ostream &operator<<(std::ostream &out, const matf::lista &l) 
{
  for (auto i = 0u; i < l.size(); ++i) {
    out << l[i] << " ";
  }

  return out;
}

