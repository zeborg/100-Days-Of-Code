#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  for(int i=0; i<s.length()-1; i++){
    for(int j=i+1; j<s.length(); j++){
      if(s[i]>s[j]) {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
      }
    }
  }
  cout << s << '\n';
  for(int i=s.length()-1; i>=0; i--)
    cout << s[i];
  cout << '\n';

  return 0;
}
