#include <iostream>
using namespace std;

int main() {
    int d1, v1, d2, v2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	int max[] = {d1,v1}, min[] = {d2,v2};
	int vaccs=0, days=0;
	if(d1 < d2){
	    max[0]=d2,max[1]=v2,min[0]=d1,min[1]=v1;
	    
	    for(int i=0; i<(max[0]-min[0]) && vaccs<p; i++){
	        vaccs+=min[1];
	        days++;
	    }
	}else if(d1 > d2){
	    for(int i=0; i<(max[0]-min[0]) && vaccs<p; i++){
	        vaccs+=min[1];
	        days++;
	    }
	}
	
	while(vaccs<p){
	    vaccs+=v1+v2;
	    days++;
	}
	for(int i=1; i<min[0]; i++) days++;
	
	cout << days;
	return 0;
}

