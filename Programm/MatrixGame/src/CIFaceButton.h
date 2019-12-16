#include "Interface.h"
#include "CIFaceElement.h"

//////////////////////////////////////////////////
//Button Class
class CIFaceButton : public  CIFaceElement {
public:
	
	bool OnMouseMove(CPoint);
	void OnMouseLBUp();
	bool OnMouseLBDown();
    bool OnMouseRBDown();

	CIFaceButton();
	~CIFaceButton();
};
