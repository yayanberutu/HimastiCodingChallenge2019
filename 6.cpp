#include<bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;

int main(){
	int m, d, a, b;
	cin >> m >> d >> a >> b;
	string temp;
	long long count = 0;
	
	for(int i=a; i<= b; i++){
		if(i % m == 0){
			temp = to_string(i);
			bool stat = false;
			for(int j=0; j<temp.size(); j++){
				int t = temp.at(j) - 48;
				if(temp.size() == 4){
					if(j == 1){
						if(temp.at(j) != temp.at(3)){
							stat = false;
							break;
						}
					}
				}
				if(d == t){
					if(j % 2 == 0){
						stat = false;
						break;
					}
					
					stat = true;
				}
			}
			if(stat == true){
//				cout << "i: " << i  << endl;
				count++;
			} 
		}
	}
	int td=0;
	if(d == 0){
		if(b < 10){
			for(int i=a; i<=b; i++){
				if(i % m == 0){
					td++;
				}
			}
			count += td;
		}
		else{
			for(int i=a; i<10; i++){
				if(i % m == 0){
					td++;
				}	
			}
			count *= 2;
			count += td;
		}
	}
	
	cout << count % MOD << endl;
	return 0;
}
