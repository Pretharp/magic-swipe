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
    puts("������ˢ������:");
    cin>>n;
    puts("������ˢ��ʱ����,1000Ϊ1�룺");
    cin>>t;
	if(t<=60) t=60;
    puts("�밴�������֮�󽫹�������Ҫˢ���Ĵ����С���"); 
	system("pause");
	Sleep(3000);
	for(int i=1;i<=n;i++){
		a();
		Sleep(t);
	}
	puts("ˢ������");
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
	// �뽫�·��� "QwQ" �滻����Ҫˢ�������� 
	// ���ߵ�˫���ź� "\n" ��Ҫɾ��Ŷ~ 
	s="QwQ \n";
    for(int i=0;i<s.size();i++){
    	if(s[i]=='\n') break;
		ss[1]+=s[i];
    }
}

