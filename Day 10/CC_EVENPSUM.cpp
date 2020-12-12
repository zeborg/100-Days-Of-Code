#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--){
	    long A, B;
	    cin >> A >> B;
	    long Ao=0, Ae=0, Bo=0, Be=0;
	    
	    (A%2)?Ae=A/2,Ao=A/2+1:Ao=Ae=A/2;
	    (B%2)?Be=B/2,Bo=B/2+1:Bo=Be=B/2;
	    
	    cout << Ao*Bo+Ae*Be << "\n";
	}
}
