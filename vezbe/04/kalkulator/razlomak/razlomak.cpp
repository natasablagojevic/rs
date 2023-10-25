#include "razlomak.hpp"

int Razlomak::numerator() const {
  return m_numerator;
}

Razlomak::Razlomak(int numerator, int denominator) 
  : m_numerator(numerator),
    m_denominator(denominator) {}

