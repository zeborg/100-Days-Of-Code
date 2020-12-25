#include <iostream>
using namespace std;

int main(){
  string s;
  int c=0;
  cin >> s;
  for(int i=0; i<s.length(); i++)
    if(s[i]=='a') {cout << i << " "; c++;}
  if(!c) cout << -1 << "\n";
  else cout << "\n";
  return 0;
}
