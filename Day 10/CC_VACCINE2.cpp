#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--){
	    int N, D;
	    cin >> N >> D;
	    int risk=0, norisk=0;
	    int sample;
	    for(int i=0; i<N; i++){
	        cin >> sample;
	        if(sample>=80 || sample <=9) risk++;
	        else norisk++;
	    }
	    cout << risk/D+bool(risk%D)+norisk/D+bool(norisk%D) << "\n";
	}
	return 0;
}

