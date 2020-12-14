#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--){
	    int N, K, n=-1;
	    cin >> N >> K;
	    int arr[N];
	    for(int i=1; i<=N;i ++){
	        arr[i-1] = i*n;
	        n*=-1;
	    };
	    if(K==N/2)
	        for(int i=0; i<N; i++)
	            cout << arr[i] << " ";
        else{
            if(K<N/2)
                for(int i=0; i<N/2-K; i++)
                    !(N%2)?(arr[N-2*i-1]*=-1):(arr[N-2*i-2]*=-1);
            else
                for(int i=0; i<K-N/2; i++)
                    !(N%2)?(arr[N-2*i-2]*=-1):(arr[N-2*i-1]*=-1);
            for(int i=0; i<N; i++) cout << arr[i] << " ";
        }
	}
	
	return 0;
}

