#include <iostream>
using namespace std;

int main(){
  string s;
  int i,j,c=0;
  
  cin >> s >> i >> j;

  for(int k=0; k<(j-i+1)/2; k++){
    char tmp;
    tmp = s[i+c-1];
    s[i+c-1] = s[j-c-1];
    s[j-c-1] = tmp;
    c++;
  }
  
  cout << s << "\n";

  return 0;
}
