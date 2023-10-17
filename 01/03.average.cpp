#include<iostream>
#include<vector>
#include<complex>
#include<numeric>
#include<algorithm>
#include<iterator>

// moderan c++ nacin
int main()
{
  using namespace std;

  vector<complex<double>> numbers;

  // ucitavanje sa stdin svodimo na kopiranje objekata iz stdin u neku kolekciju

  copy(istream_iterator<complex<double>>(cin), istream_iterator<complex<double>>(), back_inserter(numbers));

  


  return 0;
}