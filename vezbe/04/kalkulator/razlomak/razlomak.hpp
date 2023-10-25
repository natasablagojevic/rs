#ifndef __RAZLOMAK_HPP__
#define __RAZLOMAK_HPP__

#include<iostream>

class Razlomak 
{
  public:
    // lista inicijalizacije
    Razlomak(int numerator = 0, unsigned denominator = 1u)
      : m_numerator(numerator), m_denominator(denominator) {}
 
    // geteri:
    // int numerator() const {return m_numerator;}
    int numerator() const;
    Razlomak(int numerator, int denominator);
    int denominator() const { return m_denominator; }

    Razlomak operator+(const Razlomak &other) const {
      auto num = this->numerator()*other.denominator() + this->denominator() * other.numerator();
      auto denom = this->denominator() * other.denominator();

      return Razlomak(num, denom);
    }

    // ++f
    Razlomak &operator++();


    // f++  - prema dogovoru mora int da se navede kako bi se razlikovati potpisi
    Razlomak operator++(int);

    // static_cast<double>(f)
    operator double() const;

  private:
    // ova funkcija sa ovim potpisom, ta funkcija moze da pristupa svim
    // privatnim clanicama ove moje klase Razlomak
    friend std::istream& operator>>(std::istream &in, Razlomak &f);
    
    int m_numerator;
    unsigned m_denominator;

};

// const - samo citamo razlomak, ne menjamo ga
std::ostream& operator<<(std::ostream &out, const Razlomak &f) 
{
  out << f.numerator() << "/" << f.denominator();
  return out;
}

std::istream& operator>>(std::istream& in, Razlomak &f) 
{ 
  char c;

  in >> f.m_numerator >> c >> f.m_denominator;

  return in;
}


#endif 