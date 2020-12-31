#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float a,b,c,d,f;
  cin >> a >> b >> c >> d >> f;
  float s1 = (a+b+f)/2;
  float s2 = (c+d+f)/2;
  cout << (sqrt(s1*(s1-a)*(s1-b)*(s1-f)) + sqrt(s2*(s2-c)*(s2-d)*(s2-f))) << '\n';
  return 0;
}

