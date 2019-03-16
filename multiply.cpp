#include <iostream>
using namespace std;

class Product {
  
public:
  int multiply_xy(int x, int y) {
    return x*y;
  }
};

int main() {
  Product *ans = new Product();
  int x,y;
  cin >> x >> y;
  
  int a = 0;
  a = ans->multiply_xy(x,y);
  
  cout << a << "\n";
  
  delete ans;
}