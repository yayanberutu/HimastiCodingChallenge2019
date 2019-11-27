#include<bits/stdc++.h>

using namespace std;
void olah(vector<int> vec, int uang){
	int jlh = accumulate(vec.begin(), vec.end(), 0);
	double masing = (double) uang/jlh; // uang persoal
	int te = floor(masing);
	
	for(int i=0; i<vec.size(); i++){
		cout << te*vec.at(i) << endl;
	}
}
int main(){
	int n;
	int d;
	cin >> n >> d;
	vector<int> vec;
	for(int i=0; i <n; i++){
		int data;
		cin >> data;
		vec.push_back(data);
	}
	olah(vec, d);
	
	return 0;
}
