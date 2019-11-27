#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	return 0;
}#include<bits/stdc++.h>

using namespace std;
string decToBinary(int n) 
{ 
	string temp = "";
    // Size of an integer is assumed to be 32 bits 
    for (int i = 15; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
       	 temp += "1";
        
        else
        	temp += "0";
    } 
    return temp;
} 
int main(){
	int	n;
	cin >> n;
	string temp = decToBinary(n);
//	cout << temp << endl;
	int temp0 = 0;
	int temp1 = 0;
	for(int i=0; i< temp.size(); i++){
		if(temp.at(i) == '0') {
			temp0++;
		}
		if(temp.at(i) == '1') {
			temp1++;
		}
	}
	cout << "0 = " << temp0 << endl;
	cout << "1 = " << temp1 << endl;
	return 0;
}
