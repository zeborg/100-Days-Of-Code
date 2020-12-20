#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++) cin >> arr[i];
  for(int i=0; (!(n%2))?i<n:i<n-1; i+=2){
    arr[i]+=arr[i+1];
    arr[i+1]=arr[i]-arr[i+1];
    arr[i]-=arr[i+1];
  }
  for(int i=0; i<n; i++) cout << arr[i] << " ";
  cout << "\n";
  return 0;
}
