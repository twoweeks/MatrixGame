#include "Interface.h"
#include "CIFaceElement.h"

////////////////////////////////////////////////////////
//Static Image Class

class CIFaceStatic : public CIFaceElement {
public:

	bool OnMouseLBDown();
    void OnMouseLBUp();
	bool OnMouseMove(CPoint);
    bool OnMouseRBDown();

    CIFaceStatic();
	~CIFaceStatic();
};