#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int bs,Tab,enter,shift,ctrl,alt,caps,esc,space,page_up,page_down;
int end,home,left_arrow,up_arrow,right_arrow,dw_arrow,insert,del,num_lock;
int fenmao,dengjia,douxiaoyu,jianxiahua,diandayu,xiewenhao,bolangxian;
int zuozhongdakuohao,fanxiehuo,youzhongdakuohao,yinghao,A,B,C,D,E,F;
int G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;
int zero,one,two,three,four,five,six,seven,eight,nine;
signed main(){
	int key;
	while(1){
		key = 0;
		ofstream fout("Recoder.txt");
		fout<<"bs:"<<bs<<endl<<"Tab:"<<Tab<<endl<<"enter"<<enter<<endl<<"shift"<<shift<<endl<<"ctrl"<<ctrl<<endl<<"alt"<<alt<<endl<<"caps"<<caps<<endl;
		fout<<"esc:"<<esc<<endl<<"space:"<<space<<endl<<"page_up"<<page_up<<endl<<"page_down"<<page_down<<endl<<"end"<<end<<endl<<"home"<<home<<endl<<"left_arrow"<<left_arrow<<endl;
		fout<<"up_arrow"<<up_arrow<<endl<<"right_arrow"<<right_arrow<<endl<<"dw_arrow"<<dw_arrow<<endl;
			key = _getch();
			if (key == 8)
				bs++;
			else if (key == 9)
				Tab++;
			else if (key == 13)
				enter++; 
			else if (key == 16)
				shift++;
			else if (key == 17)
				ctrl++;
			else if (key == 18)
				alt++;
			else if (key == 20)
				caps++; 
			else if (key == 27)
				esc++;
			else if (key == 32)
				space++;
			else if (key == 33)
				page_up++;
			else if (key == 34)
				page_down++;
			else if (key == 35)
				end++;
			else if (key == 36)
				home++;
			else if (key == 37)
				left_arrow++;
			else if (key == 38)
				up_arrow++; 
			else if (key == 39)
				right_arrow++;
			else if (key == 40)
				dw_arrow++;
			else if (key == 45)
				insert++;
			else if (key == 46)
				del++; 
			else if (key == 144)
				num_lock++;
			else if (key == 186)
				fenmao++;
			else if (key == 187)
				dengjia++;
			else if (key == 188)
				douxiaoyu++; 
			else if (key == 189)
				jianxiahua++;
			else if (key == 190)
				diandayu++;
			else if (key == 191)
				xiewenhao++;
			else if (key == 192)
				bolangxian++; 
			else if (key == 219)
				zuozhongdakuohao++;
			else if (key == 220)
				fanxiehuo++;
			else if (key == 221)
				youzhongdakuohao++;
			else if (key == 222)
				yinghao++; 
			else if (key == 65)
				A++;
			else if (key == 66)
				B++;
			else if (key == 67)
				C++;
			else if (key == 68)
				D++;
			else if (key == 69)
				E++;
			else if (key == 70)
				F++;
			else if (key == 71)
				G++;
			else if (key == 72)
				H++;
			else if (key == 73)
				I++;
			else if (key == 74)
				J++;
			else if (key == 75)
				K++;
			else if (key == 76)
				L++;
			else if (key == 77)
				M++;
			else if (key == 78)
				N++;
			else if (key == 79)
				O++;
			else if (key == 80)
				P++;
			else if (key == 81)
				Q++;
			else if (key == 82)
				R++;
			else if (key == 83)
				S++;
			else if (key == 84)
				T++;
			else if (key == 85)
				U++;
			else if (key == 86)
				V++;
			else if (key == 87)
				W++;
			else if (key == 88)
				X++;
			else if (key == 89)
				Y++;
			else if (key == 90)
				Z++;
			else if (key == 48)
				zero++;
			else if (key == 49)
				one++;
			else if (key == 50)
				two++;
			else if (key == 51)
				three++;
			else if (key == 52)
				four++;
			else if (key == 53)
				five++;
			else if (key == 54)
				six++;
			else if (key == 55)
				seven++;
			else if (key == 56)
				eight++;
			else if (key == 57)
				nine++;
	}
	return 0;
}

