#ifndef __MASTER_STUDENT_HPP__
#define __MASTER_STUDENT_HPP__

#include "student.hpp"

class MasterStudent : public Student 
{
  public: 
    MasterStudent(const std::string &imePrezime, Studije studije, const std::vector<int> &ocene,const std::string &naslovTeze, const std::string &mentor);

    // prevazilazenje metoda
    // virtual std::string predstaviSe() const;
    std::string predstaviSe() const override;

    ~MasterStudent() override;

  private: 
    std::string m_naslovTeze;
    std::string m_mentor;


};

#endif