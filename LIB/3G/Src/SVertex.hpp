#ifndef CVERTEX_H
#define CVERTEX_H

#include "d3dx9.h"

struct SVertex
{
    D3DXVECTOR3 v;
    D3DXVECTOR3 n;
    float tu,tv;
};


#endif