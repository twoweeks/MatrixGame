#pragma once

#include "basedef.hpp"

namespace Base {

BASE_API void Reg_GetString(HKEY pkey, const wchar * path, const wchar * name, const CWStr & str);
BASE_API CWStr Reg_GetString(HKEY pkey, const wchar * path, const wchar * name, const wchar * defaultstr);
BASE_API void Reg_SetString(HKEY pkey, const wchar * path, const wchar * name, const wchar * str);

}
