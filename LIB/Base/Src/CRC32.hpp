#pragma once

#include "basedef.hpp"

namespace Base {

BASE_API dword CalcCRC32(const void * buf, int len);
BASE_API dword CalcCRC32_Begin(const void * buf, int len);
BASE_API dword CalcCRC32_Buf(dword crc,const void * buf, int len);
BASE_API dword CalcCRC32_End(dword crc);

}
