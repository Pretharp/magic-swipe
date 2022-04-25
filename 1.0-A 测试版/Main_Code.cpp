#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void a();
void b();
int tot,n,t;
string temp,s,ss[2];
int main()
{
	b();
    puts("请输入刷屏次数:");
    cin>>n;
    puts("请输入刷屏时间间隔,1000为1秒：");
    cin>>t;
	if(t<=60) t=60;
    puts("请按下任意键之后将光标放置在要刷屏的窗口中……"); 
	system("pause");
	Sleep(3000);
	for(int i=1;i<=n;i++){
		a();
		Sleep(t);
	}
	puts("刷屏结束");
	return 0;
}
void a()
{
    DWORD content;
    char buf[20020];
    HGLOBAL hGlobal;
    strcpy(buf,ss[1].c_str());
    hGlobal=GlobalAlloc(GPTR, (lstrlenA(buf)+1));
    char*pGlobal=(char*)GlobalLock(hGlobal);
    lstrcpyA(pGlobal, buf);
    GlobalUnlock(hGlobal);
    OpenClipboard(NULL);
    EmptyClipboard();
    SetClipboardData(CF_TEXT,hGlobal);
    CloseClipboard();
    keybd_event(VK_CONTROL,0,0,0);
	keybd_event('V',0,0,0);
	keybd_event('V',0,KEYEVENTF_KEYUP,0);
	keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
	keybd_event(VK_RETURN,0,0,0); 
	keybd_event(VK_RETURN,0,KEYEVENTF_KEYUP,0);
}
void b()
{
	// 请将下方的 "QwQ" 替换成你要刷屏的文字 
	// 两边的双引号和 "\n" 不要删除哦~ 
	s="QwQ \n";
    for(int i=0;i<s.size();i++){
    	if(s[i]=='\n') break;
		ss[1]+=s[i];
    }
}

