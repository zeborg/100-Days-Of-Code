#include <iostream>
using namespace std;

int main(){
  string s, a="abcdefghijklmnopqrstuvwxyz", A="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int k;
  cin >> s >> k;
  
  for(int i=0; i<s.length(); i++){
    if(s[i]>='a' && s[i]<='z'){
      cout << a[(26+s[i]-'a'-k)%26];
    } else if(s[i]>='A' && s[i]<='Z') {
      cout << A[(26+s[i]-'A'-k)%26];
    } else cout << s[i];
  }
  cout << "\n";

  return 0;
}
