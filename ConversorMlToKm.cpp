#include <iostream>
int main (void)
{
  double ml = 1.5;
  double km = 3.0;
  std:: cout <<"Please introduce your number of miles :" << std::endl;
  std:: cin >> ml;
  //CONVERSION
  km = ml*1.609;
  std:: cout <<"Your number of miles in kilometers is exactly :" << km << std:: endl;
  return 0;
}
