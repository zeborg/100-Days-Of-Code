#include <iostream>
using namespace std;

int main(){
  int T;
  cin >> T;
  while(T--){
    int n,c=0;
    cin >> n;
    string S;
    cin >> S;
    for(int i=n-1; i>=(n/2-1); i--){
      if(S[i]==')') c++;
      else break;
    }
    cout << ((c>n/2)?"Yes":"No") << "\n";
  }
  return 0;
}
