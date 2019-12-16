#pragma once

#ifdef BITMAP_DLL
	#ifdef BITMAP_EXPORTS
		#define BITMAP_API __declspec(dllexport)
	#else
		#define BITMAP_API __declspec(dllimport)
	#endif
#else
	#define BITMAP_API
#endif
