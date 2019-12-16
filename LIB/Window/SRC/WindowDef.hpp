#pragma once

#ifdef WINDOW_DLL
	#ifdef WINDOW_EXPORTS
		#define WINDOW_API __declspec(dllexport)
	#else
		#define WINDOW_API __declspec(dllimport)
	#endif
#else
	#define WINDOW_API
#endif
