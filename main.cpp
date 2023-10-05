#include <bits/stdc++.h>
using namespace std;
signed main(){
	char key;
	while(1){
		key = '0';
		if (_kbhit()){
			key = getchar();
			if (key == 8){
				bs++;
			}
			else if (key == 9){
				Tab++;
			}
			else if (key == 13){
				
			}
			break;
		}
	}
	return 0;
}
