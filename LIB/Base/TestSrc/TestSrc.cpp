// TestSrc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\src\base.hpp"

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

LONG MyFilter(LPEXCEPTION_POINTERS ei)
{
	//LPEXCEPTION_POINTERS ei;
	//ei=GetExceptionInformation();

//	DWORD zn=GetExceptionCode();
	return /*EXCEPTION_EXECUTE_HANDLER;//*/EXCEPTION_CONTINUE_SEARCH;
}

void test()
{
	CHeap * h1=new CHeap(1024*64);
	CHeap * h2=new CHeap(1024*64);

	CWStr * us=HNew(h1) CWStr;
	*us=L"Begin Base.TestSrc\n";
	wprintf((wchar *)*us);
	HDelete(CWStr,us,h1);

	CWStr str;

	for(int i=0;i<200;i+=13) {
		str.Format(L"{<w=5><a=-><i>}\n",i);
		wprintf((wchar *)str);
	}

/*	i=0;
	i=1/i;*/

	{
	CBuf buf(h2);
	buf.WStrText(CWStr(L"test1"));
	buf.WStrText(CWStr(L"test2"));
	buf.WStrText(CWStr(L"test3"));
	buf.WStrText(CWStr(L"test4"));
	buf.Pointer(0);
	wprintf((wchar *)(buf.WStrText()+L"\n"));
	wprintf((wchar *)(buf.WStrText()+L"\n"));
	wprintf((wchar *)(buf.WStrText()+L"\n"));
	wprintf((wchar *)(buf.WStrText()+L"\n"));


		wprintf(L"\n\n");
		CBlockPar bp(h2);

		bp.LoadFromTextFile(L"cfg/main.txt");
		bp.ParPathSet(L"Block3.P2",L"my1");
		bp.SaveInTextFile(L"cfg/test.txt",true);
/*		bp.ParAdd(L"p0",L"z1");
		bp.ParAdd(L"p1",L"z2");
		bp.ParAdd(L"p1",L"z3");
		bp.ParAdd(L"p1",L"z4");
		bp.ParAdd(L"p1",L"z5");
		bp.ParAdd(L"p2",L"z6");
		bp.ParCount(L"p1");

		bp.ParSet(L"p1",L"s");

		for(i=0;i<bp.ParCount();i++) {
			wprintf(L"%s=%s\n",(wchar *)bp.ParGetName(i),(wchar *)bp.ParGet(i));
		}
		wprintf((wchar *)(bp.ParGet(L"p1")+L"\n"));*/
	}

	delete h2;
	delete h1;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//PVOID eh = AddVectoredExceptionHandler(1,ExceptionError);
//	SetUnhandledExceptionFilter(ExceptionError);

	__try {
		test();
   } __except(MyFilter(GetExceptionInformation())) {
   }

/*	try {
	} catch(...) {
		PrintException(GetExceptionInformation());
	}*/

//	RemoveVectoredExceptionHandler(eh);

	getchar();

	return 0;
}

