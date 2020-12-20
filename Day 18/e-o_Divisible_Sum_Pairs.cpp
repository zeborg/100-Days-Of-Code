#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k,c=0;
  cin >> n >> k;
  int arr[n];

  for(int i=0; i<n; i++) cin >> arr[i];
  sort(arr,arr+n);

  for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n; j++)
      if(!((arr[i]+arr[j])%k)) c++;
  
  cout << c << "\n";

  return 0;
}
