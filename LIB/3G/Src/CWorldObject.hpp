#ifndef CWORLDOBJECT_H
#define CWORLDOBJECT_H

#include "d3dx9.h"

#include "../../../Lib/Base/Src/CList.hpp"

class CCoordSystem;

class CWorldObject : public CMain , public CListInterface<CWorldObject>
{
    CCoordSystem *_owner;   // координатная система - владелец

public:
    CWorldObject(CCoordSystem * cs):
    _owner(cs)
    {
    }

    virtual void Render(void) = 0;

};


#endif