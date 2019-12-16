#pragma once

#ifdef FILEJPG_DLL
	#ifdef FILEJPG_EXPORTS
		#define FILEJPG_API __declspec(dllexport)
	#else
		#define FILEJPG_API __declspec(dllimport)
	#endif
#else
	#define FILEJPG_API
#endif

FILEJPG_API DWORD FileJPG_ReadStart_Buf(void * soubuf,DWORD soubuflen,DWORD * lenx,DWORD * leny);
FILEJPG_API DWORD FileJPG_Read(DWORD id,void * buf,DWORD lenline);
