#include<iostream>
#include<vector>
#include<complex>

#include<numeric> // std::accumulate

class httprequest {};
class MiddlewareFunction {};

MiddlewareFunction f1;
MiddlewareFunction f2;
MiddlewareFunction f3;

MiddlewareFunction req;

//  >>   >>   >>
// req + f1 + f2 + f3;

// bez ovoga se ne moze kompilirati
int main()
{
  /* 
    std:: = standardni prostor imena u kome se nalaze definicije klasa
            funkcija iz standardne biblioteke
   */
  // std::complex<double>
  std::vector<int> numbers;
  int number;

  while (std::cin >> number) {
    numbers.push_back(number);
  }

  for (auto &x : numbers) 
    std::cout << x << ' ';
  std::cout << std::endl;

  int sum = 0;
  auto n = numbers.size();


  // U JAVI je sve dinamicki = Complex x => x je pokazivac na memoriju na Hipu
  // PROBLEM EFIKASNOSTI
  for (auto &x : numbers)
    sum += x;

  // REFERENCE - ne treba dereferencirati, automacki se radi
  // auto = automatska dedukcija tipa, dedukciju vrsi prevodilac
  // gde god moze, stavljati auto

  

  //                               pocetak       kraj         neutral
  std::cout << std::accumulate(numbers.begin(), numbers.end(), 0) << std::endl;


  // std::cout << "Aritmeticka sredina: " << (double)sum/n << std::endl;
  std::cout << "Aritmeticka sredina: " << static_cast<double>(sum)/n << std::endl;  


  // moze da se izostavi, jer se podrazumeva da je povratna vrednost 0
  return 0;
}