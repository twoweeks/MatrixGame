#pragma once

#include "basedef.hpp"

__forceinline void    memcopy_back_dword(void *tgt, const void *src, DWORD size) //same as blk_copy, but copying by sizeof(uint) bytes
{
    DWORD    *uitgt = ((DWORD *)tgt) + size - 1;
    const DWORD    *uisrc = ((const DWORD *)src) + size - 1;
    while(size)
    {
        *uitgt-- =  *uisrc--;
        size--;
    }
}


