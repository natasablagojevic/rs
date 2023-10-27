#ifndef __STUDENT_HPP__
#define __STUDENT_HPP__

#include <string>
#include <vector>
#include <iostream>

enum class Studije
{
  MATEMATIKA,
  INFORMATIKA,
  ASTRONOMIJA
};

/**
 * Sve funkcije koje mogu da se prevazidju
 * da se promeni implementacija u nekim
 * potklasama, sve takve funkcije u c++ u baznoj
 * klasi moramo deklarisati kao virtualne. 
 * U izvedenoj klasi je opciona stvar, dok je 
 * u baznoj klasi obavezna.
 * 
 * Override = da naznaci da je to metod koji 
 * se prevazilazi iz baznih klasa
 */

class Student 
{
  public:
    Student(const std::string imePrezime, Studije studije, const std::vector<int> &ocene);


    double prosecnaOcena() const;
    void dodajOenu(int ocena);
    // virtual std::string predstaviSe() const ; // override
    std::string predstaviSe() const;
    
    // moramo da imamo virtual destruktor
    // sve klase u hijerarhiji klasa moraju
    // imati virtual destruktor
    virtual ~Student();

  protected:
    std::string nazivPrograma() const;

  
  
  private:
    std::string m_imePrezime;
    Studije m_studije;
    std::vector<int> m_ocene;


};

#endif