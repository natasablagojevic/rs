#include "student.hpp"
#include <numeric>
#include<iterator>
#include<string>

Student::Student(const std::string imePrezime, Studije studije, const std::vector<int> &ocene) :
      m_imePrezime(imePrezime), m_studije(studije), m_ocene(ocene)
      {}

Student::~Student()
{
  std::cout << "~Student" << std::endl;
}

double Student::prosecnaOcena() const
{ 
  return  std::accumulate(m_ocene.cbegin(), m_ocene.cend(), 0.0) / m_ocene.size();
}

void Student::dodajOenu(int ocena)
{
  m_ocene.push_back(ocena);
}

std::string Student::nazivPrograma() const
{
  switch (m_studije) {
    case Studije::MATEMATIKA : return "Matematika";
    case Studije::INFORMATIKA : return "Informatika";
    case Studije::ASTRONOMIJA : return "Astronomija";
    default: return "";
  }
}

std::string Student::predstaviSe() const
{
  return "Ja sam " + m_imePrezime + ". Na smeru " + nazivPrograma() + " imam prosecnu ocenu: " + std::to_string(prosecnaOcena()) + ".";
}