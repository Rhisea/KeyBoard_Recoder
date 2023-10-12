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
		fout<<"bs:"<<bs<<endl<<"Tab:"<<Tab<<endl<<"enter:"<<enter<<endl<<"shift:"<<shift<<endl<<"ctrl:"<<ctrl<<endl<<"alt:"<<alt<<endl<<"caps:"<<caps<<endl;
		fout<<"esc:"<<esc<<endl<<"space:"<<space<<endl<<"page_up:"<<page_up<<endl<<"page_down:"<<page_down<<endl<<"end:"<<end<<endl<<"home:"<<home<<endl<<"left_arrow:"<<left_arrow<<endl;
		fout<<"up_arrow:"<<up_arrow<<endl<<"right_arrow:"<<right_arrow<<endl<<"dw_arrow:"<<dw_arrow<<endl<<"insert:"<<insert<<endl<<"del:"<<del<<endl<<"num_lock:"<<num_lock<<endl<<"fenmao:"<<fenmao<<endl;
		fout<<"dengjia:"<<dengjia<<endl<<"douxiaoyu:"<<douxiaoyu<<endl<<"jianxiahua:"<<jianxiahua<<endl<<"diandayu:"<<diandayu<<endl<<"xiewenhao:"<<xiewenhao<<endl<<"bolangxian:"<<bolangxian<<endl;
		fout<<"zuozhongdakuohao"<<zuozhongdakuohao<<endl<<"fanxiehuo:"<<fanxiehuo<<endl<<"youzhongdakuohao:"<<youzhongdakuohao<<endl<<"yinghao:"<<yinghao<<endl;
		fout<<"A:"<<A<<endl<<"B:"<<B<<endl<<"C:"<<C<<endl<<"D:"<<D<<endl<<"E"<<E<<endl<<"F:"<<F<<endl<<"G:"<<G<<endl<<"H:"<<H<<endl<<"I:"<<I<<endl<<"J:"<<J<<endl;
		fout<<"K:"<<K<<endl<<"L:"<<L<<endl<<"M:"<<M<<endl<<"N:"<<N<<endl<<"O:"<<O<<endl<<"P:"<<P<<endl<<"Q:"<<Q<<endl<<"R:"<<R<<endl<<"S"<<S<<endl<<"T:"<<T<<endl;
		fout<<"U:"<<U<<endl<<"V:"<<V<<endl<<"W:"<<W<<endl<<"X:"<<X<<endl<<"Y:"<<Y<<endl<<"Z:"<<Z<<endl;
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
		else if (key == 97 or key == 65)
			A++;
		else if (key == 98 or key == 66)
			B++;
		else if (key == 99 or key == 67)
			C++;
		else if (key == 100 or key == 68)
			D++;
		else if (key == 69 or key == 101)
			E++;
		else if (key == 70 or key == 102)
			F++;
		else if (key == 71 or key == 103)
			G++;
		else if (key == 72 or key == 104)
			H++;
		else if (key == 73 or key == 105)
			I++;
		else if (key == 74 or key == 106)
			J++;
		else if (key == 75 or key == 107)
			K++;
		else if (key == 76 or key == 108)
			L++;
		else if (key == 77 or key == 109)
			M++;
		else if (key == 78 or key == 110)
			N++;
		else if (key == 79 or key == 111)
			O++;
		else if (key == 80 or key == 112)
			P++;
		else if (key == 81 or key == 113)
			Q++;
		else if (key == 82 or key == 114)
			R++;
		else if (key == 83 or key == 115)
			S++;
		else if (key == 84 or key == 116)
			T++;
		else if (key == 85 or key == 117)
			U++;
		else if (key == 86 or key == 118)
			V++;
		else if (key == 87 or key == 119)
			W++;
		else if (key == 88 or key == 120)
			X++;
		else if (key == 89 or key == 121)
			Y++;
		else if (key == 90 or key == 122)
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

