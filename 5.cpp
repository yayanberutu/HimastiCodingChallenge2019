#include<bits/stdc++.h>

using namespace std;

int main(){
	string str = "NINA ISMAYA PANGARIBUAN";
	int n;
	cin>> n;
	int len = str.length();
	int hasil = n % len; 
	cout << str.at(hasil-1) << endl;	
	
	return 0;
}
