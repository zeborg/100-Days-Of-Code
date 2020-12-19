#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int size, T, R=0, B=0, D=0;
        string r,b;
        
        cin >> size >> r >> b;
        
        for(int i=0; i<size; i++){
            if(r[i]>b[i]) R++;
            else if(r[i]<b[i]) B++;
            else D++;
        }
        if(R>B) cout << "RED\n";
        else if(B>R) cout << "BLUE\n";
        else cout << "EQUAL\n";
    }
    return 0;
}
