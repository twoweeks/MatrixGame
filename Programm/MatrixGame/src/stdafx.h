// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#ifndef STDAFX_MAIN_HEADER
#define STDAFX_MAIN_HEADER

// Windows Header Files:
#include <windows.h>
// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// TODO: reference additional headers your program requires here

#include "../../../Lib/3g/Src/stdafx.h"

#include "../../../Lib/3g/Src/3g.hpp"
#include "../../../Lib/3g/Src/VectorObject.hpp"
#include "../../../Lib/3g/Src/CBillboard.hpp"
#include "../../../Lib/3g/Src/BigVB.hpp"
#include "../../../Lib/3g/Src/BigIB.hpp"
#include "../../../Lib/DebugMsg/Src/DebugMsg.h"

#include "MatrixMultiSelection.hpp"

#ifdef MATRIXGAME_EXPORTS
#define MATRIXGAMEDLL_API __declspec(dllexport)
#else
#define MATRIXGAMEDLL_API __declspec(dllimport)
#endif

#include "MatrixGame.h"

using namespace Base;

#endif