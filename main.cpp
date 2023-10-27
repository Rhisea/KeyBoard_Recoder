#include <bits/stdc++.h>
#include <Windows.h>
#define endl '\n'
using namespace std;
inline int read(){
    int x = 0,f = 1;
    char c = getchar();
    while (!isdigit(c)){
        if (c == '-') f = -1;
        c = getchar();
    }
    while (isdigit(c)){
        x = x*10+c-'0';
        c = getchar();
    }
    return x*f;
}
int bs,Tab,enter,shift,ctrl,alt,caps,esc,space,page_up,page_down;
int End,home,left_arrow,up_arrow,right_arrow,dw_arrow,insert,del,num_lock;
int fenmao,dengjia,douxiaoyu,jianxiahua,diandayu,xiewenhao,bolangxian;
int zuozhongdakuohao,fanxiehuo,youzhongdakuohao,yinghao,A,B,C,D,E,F;
int G,H,I,J,K,L,M,N,O,P,Q,R,S,TT = 0,U,V,W,X,Y,Z;
int zero,one,two,three,four,five,six,seven,eight,nine;
SYSTEMTIME systime;
LRESULT CALLBACK Proc(int code,WPARAM w,LPARAM l);
signed main(){
	ShowWindow(GetConsoleWindow(),SW_MINIMIZE); 
	TT = 0;
    HHOOK hook = ::SetWindowsHookEx(WH_KEYBOARD_LL,Proc,0,0);
    MSG msg;
    while (GetMessage(&msg,NULL,0,0)){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    UnhookWindowsHookEx(hook);
    return 0;
} 
LRESULT CALLBACK Proc(int code,WPARAM w,LPARAM l){
	ofstream fout("Recoder.txt");
    KBDLLHOOKSTRUCT *T = (KBDLLHOOKSTRUCT*)l;
    DWORD x = T->vkCode;
    if (w == WM_KEYDOWN){
        GetLocalTime(&systime);
        fout<<"bs:"<<bs<<endl<<"Tab:"<<Tab<<endl<<"enter:"<<enter<<endl<<"shift:"<<shift<<endl<<"ctrl:"<<ctrl<<endl<<"alt:"<<alt<<endl<<"caps:"<<caps<<endl;
		fout<<"esc:"<<esc<<endl<<"space:"<<space<<endl<<"page_up:"<<page_up<<endl<<"page_down:"<<page_down<<endl<<"end:"<<End<<endl<<"home:"<<home<<endl<<"left_arrow:"<<left_arrow<<endl;
		fout<<"up_arrow:"<<up_arrow<<endl<<"right_arrow:"<<right_arrow<<endl<<"dw_arrow:"<<dw_arrow<<endl<<"insert:"<<insert<<endl<<"del:"<<del<<endl<<"num_lock:"<<num_lock<<endl<<"fenmao:"<<fenmao<<endl;
		fout<<"dengjia:"<<dengjia<<endl<<"douxiaoyu:"<<douxiaoyu<<endl<<"jianxiahua:"<<jianxiahua<<endl<<"diandayu:"<<diandayu<<endl<<"xiewenhao:"<<xiewenhao<<endl<<"bolangxian:"<<bolangxian<<endl;
		fout<<"zuozhongdakuohao:"<<zuozhongdakuohao<<endl<<"fanxiehuo:"<<fanxiehuo<<endl<<"youzhongdakuohao:"<<youzhongdakuohao<<endl<<"yinghao:"<<yinghao<<endl;
		fout<<"A:"<<A<<endl<<"B:"<<B<<endl<<"C:"<<C<<endl<<"D:"<<D<<endl<<"E"<<E<<endl<<"F:"<<F<<endl<<"G:"<<G<<endl<<"H:"<<H<<endl<<"I:"<<I<<endl<<"J:"<<J<<endl;
		fout<<"K:"<<K<<endl<<"L:"<<L<<endl<<"M:"<<M<<endl<<"N:"<<N<<endl<<"O:"<<O<<endl<<"P:"<<P<<endl<<"Q:"<<Q<<endl<<"R:"<<R<<endl<<"S:"<<S<<endl<<"T:"<<TT<<endl;
		fout<<"U:"<<U<<endl<<"V:"<<V<<endl<<"W:"<<W<<endl<<"X:"<<X<<endl<<"Y:"<<Y<<endl<<"Z:"<<Z<<endl;
//        printf("Press: ");
//        putchar(x);
        if (x == 8)
			bs++;
		else if (x == 9)
			Tab++;
		else if (x == 13)
			enter++; 
		else if (x == 16)
			shift++;
		else if (x == 17)
			ctrl++;
		else if (x == 18)
			alt++;
		else if (x == 20)
			caps++; 
		else if (x == 27)
			esc++;
		else if (x == 32)
			space++;
		else if (x == 33)
			page_up++;
		else if (x == 34)
			page_down++;
		else if (x == 35)
			End++;
		else if (x == 36)
			home++;
		else if (x == 37)
			left_arrow++;
		else if (x == 38)
			up_arrow++; 
		else if (x == 39)
			right_arrow++;
		else if (x == 40)
			dw_arrow++;
		else if (x == 45)
			insert++;
		else if (x == 46)
			del++; 
		else if (x == 144)
			num_lock++;
		else if (x == 186)
			fenmao++;
		else if (x == 187)
			dengjia++;
		else if (x == 188)
			douxiaoyu++; 
		else if (x == 189)
			jianxiahua++;
		else if (x == 190)
			diandayu++;
		else if (x == 191)
			xiewenhao++;
		else if (x == 192)
			bolangxian++; 
		else if (x == 219)
			zuozhongdakuohao++;
		else if (x == 220)
			fanxiehuo++;
		else if (x == 221)
			youzhongdakuohao++;
		else if (x == 222)
			yinghao++; 
		else if (x == 97 or x == 65){
			A++;
        }
		else if (x == 98 or x == 66)
			B++;
		else if (x == 99 or x == 67)
			C++;
		else if (x == 100 or x == 68)
			D++;
		else if (x == 69 or x == 101)
			E++;
		else if (x == 70 or x == 102)
			F++;
		else if (x == 71 or x == 103)
			G++;
		else if (x == 72 or x == 104)
			H++;
		else if (x == 73 or x == 105)
			I++;
		else if (x == 74 or x == 106)
			J++;
		else if (x == 75 or x == 107)
			K++;
		else if (x == 76 or x == 108)
			L++;
		else if (x == 77 or x == 109)
			M++;
		else if (x == 78 or x == 110)
			N++;
		else if (x == 79 or x == 111)
			O++;
		else if (x == 80 or x == 112)
			P++;
		else if (x == 81 or x == 113)
			Q++;
		else if (x == 82 or x == 114)
			R++;
		else if (x == 83 or x == 115)
			S++;
		else if (x == 84 or x == 116)
			TT++;
		else if (x == 85 or x == 117)
			U++;
		else if (x == 86 or x == 118)
			V++;
		else if (x == 87 or x == 119)
			W++;
		else if (x == 88 or x == 120)
			X++;
		else if (x == 89 or x == 121)
			Y++;
		else if (x == 90 or x == 122)
			Z++;
		else if (x == 48)
			zero++;
		else if (x == 49)
			one++;
		else if (x == 50)
			two++;
		else if (x == 51)
			three++;
		else if (x == 52)
			four++;
		else if (x == 53)
			five++;
		else if (x == 54)
			six++;
		else if (x == 55)
			seven++;
		else if (x == 56)
			eight++;
		else if (x == 57)
			nine++;
//        cout<<endl;
    }
    return CallNextHookEx(NULL,code,w,l);
}
