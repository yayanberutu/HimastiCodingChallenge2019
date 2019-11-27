#include<bits/stdc++.h>

using namespace std;
void MinSteps(int SourceX, int SourceY, int DestX, int DestY) 
{ 
    // minimum number of steps 
    cout << max(abs(SourceX - DestX), abs(SourceY - DestY)) << endl; 
  
    // while the king is not in the same row or column  
    // as the destination 
    while ((SourceX != DestX) || (SourceY != DestY)) { 
    
    	        // Go up 
        if (SourceX < DestX) { 
            cout << 'R'; 
            SourceX++; 
        } 
  
        // Go down 
        if (SourceX > DestX) { 
            cout << 'L'; 
            SourceX--; 
        } 
        // Go left 
        if (SourceY > DestY) { 
            cout << 'D'; 
            SourceY--; 
        } 
  
        // Go right 
        if (SourceY < DestY) { 
            cout << 'U'; 
            SourceY++; 
        } 
  
  	
        cout << endl; 
    } 
} 
int main() { 
	string s, d;
	cin >> s >> d;
	char ss = s.at(0);
	char dd = d.at(0);
	char ss2 =  s.at(1);
	char dd2 =  d.at(1);

	int sourceX = ss-96;
	int sourceY = ss2-48; 
//	cout << "X asal: " << sourceX << endl;
//	cout << "Y asal: " << sourceY << endl;
	int destinationX = dd - 96; 
//	cout << "X tujuan: " << destinationX << endl;
	int destinationY =  dd2 -48; 
//	cout << "Y tujuan: " << destinationY << endl;

	MinSteps(sourceX, sourceY, destinationX, destinationY); 

	return 0; 
} 

