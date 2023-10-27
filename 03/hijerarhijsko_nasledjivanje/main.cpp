#include "student.hpp"
#include "master_student.hpp"
#include<iostream>


/**
 * Hijerarhijski polimorfizam ne treba nikada implementirati 
 * preko if-ova  i switch-ova, i nikakvim budzenjem, dynamic_cast ...!!! 
 *  
 */

int main()
{
  Student s1("Ivan Peric", Studije::ASTRONOMIJA, {7,8,9,10});
  
  std::cout << s1.predstaviSe() << std::endl;

  MasterStudent s2("Marko Markovic", Studije::INFORMATIKA, {9,9,9,10,10}, "Design Pattrns", "Filip Maric");

  std::cout << s2.predstaviSe() << std::endl;

  /**
   * Odsecanje = odsecanje (slicing)
   *  kada zelimo da objekat izvedene klase sacuvamo 
   *  u objekat bazne klase.
   * 
   */
  Student s3 = s2;

  /**
   * Pokazivaci
   *  Samo preko pokazivaca (stare reference pre ) virtuelne funkcije
   *  se ponasaju polimorfno.
   * 
   *  Preko objekata, virtuelne funkcije se ne ponasaju polimorfno.
   * 
   */
  Student *s4 = &s2;
  delete s4;

  /**
   * Sa referencama je ista stvar kao sa pokazivacima.
   * Reference su nekako jedna te ista stvar u suztini,
   * razlika je u sintaksi.
   * 
   */
  Student &s5 = s2;

  return 0;
}