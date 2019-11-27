#include <bits/stdc++.h>

using namespace std;

int main(){
	vector< pair<int,int> > vec;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int x,y;
		cin >> x >> y;
		vec.push_back(make_pair(x,y));
	}
	int x = vec.at(0).first;
	int y = vec.at(0).second; 
	int count = 0;
	for(int i=0; i<vec.size()-1; i++){
		if(i == 0){
			if((x+y) <= vec.at(i+1).first){
				vec.at(i).second = vec.at(i).first + vec.at(i).second;
				count++;
			}
		}
		else {
			x = vec.at(i).first;
			y = vec.at(i).second; 	
			if((x-y >= vec.at(i-1).first) ||((x+y) <= vec.at(i+1).first)){
				if((x-y >= vec.at(i-1).first)){
					count++;
				}
				else if((x+y) <= vec.at(i+1).first) {
					count++;
					vec.at(i).second = vec.at(i).first + vec.at(i).second;
				}
			}
		}
	
	}	
	cout << count+1 << endl;
	return 0;
}
