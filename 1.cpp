#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;	
	vector<string> vec;
	for(int i=0; i<n; i++){
		string data;
		cin >> data;
		vec.push_back(data);
	}
	string temp= vec.at(0);
	int ct = 1;
	for(int i=1; i<n;i++){
		if(temp != vec.at(i)){
			ct++;
			temp = vec.at(i);
		}
	}
	cout << ct <<endl;
	return 0;
}
