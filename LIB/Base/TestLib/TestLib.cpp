// TestLib.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	wprintf((wchar *)CWStr(L"Begin Base.TestSrc\n"));

	CWStr str;

	for(int i=0;i<200;i+=13) {
		str.Format(L"{<w=5><a=-><i>}\n",i);
		wprintf((wchar *)str);
	}

	getchar();
	return 0;
}

