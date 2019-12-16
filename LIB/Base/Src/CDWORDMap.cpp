#include "stdafx.h"
#include "CDWORDMap.hpp"

namespace Base {


void CDWORDMap::Enum(ENUM_DWORD f, DWORD user)
{
    for (int i = 0; i<HASH_TABLE_SIZE; ++i)
    {
        if (m_Table[i])
        {
            for (DWORD j = 0; j<m_Table[i]->contained; ++j)
            {
                if (!f((m_Table[i] + 1 + j)->key, (m_Table[i] + 1 + j)->value, user)) return;
            }
        }
    }
}

}