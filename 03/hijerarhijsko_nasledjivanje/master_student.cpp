#include "master_student.hpp"


MasterStudent::MasterStudent(const std::string &imePrezime, Studije studije, const std::vector<int> &ocene,const std::string &naslovTeze, const std::string &mentor)
  : Student::Student(imePrezime, studije, ocene), m_naslovTeze(naslovTeze), m_mentor(mentor)
  {}

std::string MasterStudent::predstaviSe() const
{
  return Student::predstaviSe() + " Master teza " + m_naslovTeze + " je odbranjena pod mentorstvom " + m_mentor + ".";
}

/**
 * Automatski se poziva destruktor iz natklase.
 *  
 */
MasterStudent::~MasterStudent()
{
  std::cout << "~MasterStudent" << std::endl;
}