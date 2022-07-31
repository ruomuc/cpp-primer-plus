#include <iostream>
#include <string>

using std::string;

struct CandyBar
{
  string brand;
  double weight;
  double calorie;
};

int main()
{
  using std::cout;

  CandyBar *snakes = new CandyBar[3];
  snakes[0].brand = "Mocha Munch";
  snakes[0].weight = 2.3;
  snakes[0].calorie = 350;

  snakes[1].brand = "Mocha Munch2";
  snakes[1].weight = 2.31;
  snakes[1].calorie = 3501;

  snakes[2].brand = "Mocha Munch3";
  snakes[2].weight = 2.32;
  snakes[2].calorie = 3502;

  cout << "snakes[0].brand = " << snakes[0].brand << std::endl;
  cout << "snakes[0].weight = " << snakes[0].weight << std::endl;
  cout << "snakes[0].calorie = " << snakes[0].calorie << std::endl
       << std::endl;

  cout << "snakes[1].brand = " << snakes[1].brand << std::endl;
  cout << "snakes[1].weight = " << snakes[1].weight << std::endl;
  cout << "snakes[1].calorie = " << snakes[1].calorie << std::endl
       << std::endl;

  cout << "snakes[2].brand = " << snakes[2].brand << std::endl;
  cout << "snakes[2].weight = " << snakes[2].weight << std::endl;
  cout << "snakes[2].calorie = " << snakes[2].calorie << std::endl;

  delete[] snakes;

  return 0;
}
