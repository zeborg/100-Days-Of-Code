#include <iostream>
using namespace std;

int main(){
  string s;
  bool flag = true;
  cin >> s;
  
  if(s.length()%2) cout << "no\n";
  else{
    for(int i=0; i<s.length()/2; i++){
      if(s[i]!=s[s.length()/2+i]){
        flag = false;
        break;
      }
    }
    cout << ((flag)?"yes\n":"no\n");
  }
  return 0;
}
