#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
  cout << "Hello World!\n";

  float a, b, c;
  
  cin >> a;
  cin >> b;
  cin >> c;

  if(b*b >= 4*a*c)
  {
    float pt = sqrt(b*b - 4*a*c);

    float r1 = (-b + pt)/(2*a);
    float r2 = (-b - pt)/(2*a);
    
    cout << "Res 1: " << r1  << " Res 2: " << r2 <<"\n";
  }
  else
  {
    cout << "Sin resultado.";
  }
  
}