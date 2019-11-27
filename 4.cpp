#include<bits/stdc++.h>

using namespace std;

int main(){
	long long a,b;
	cin >> a >> b;
	while(1){
		if(a == b){
			cout << "STOP!!" << endl << a << endl;
			return 0;
		}
		if(a > b){
			cout << "Lanjut terus!! Jangan kasih kendor!!" << endl;
			return 0;
		}
		a += 2;
		b -= 3;		
	}

	
	return 0;
}
