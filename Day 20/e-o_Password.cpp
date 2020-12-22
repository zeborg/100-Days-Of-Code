#include <iostream>
using namespace std;

int main(){
  int c[5]={0};
  string pass;
  cin >> pass;
  for(int i=0; i<pass.length(); i++){
    if(pass[i]>=97 && pass[i]<=122) c[0]=1;
    else if(pass[i]>=65 && pass[i]<=90) c[1]=1;
    else if(pass[i]>=48 && pass[i]<=57) c[2]=1;
    else if(pass[i]=='!' || pass[i]=='"' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='&' || pass[i]=='\'' || pass[i]=='(' || pass[i]==')' || pass[i]=='*' || pass[i]=='+') c[3]=1;
    if(pass.length()>=8) c[4]=1;
  }
  for(int i=1; i<5; i++) c[0]+=c[i];
  cout << c[0] << "\n";
  return 0;
}
