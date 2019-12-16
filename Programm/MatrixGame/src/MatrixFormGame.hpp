#pragma once

#define MAX_SCANS   16
#define MOUSE_BORDER    4
#define DOUBLESCAN_TIME_DELTA 200

struct SKeyScan
{
    DWORD time;
    DWORD scan;
};

class CFormMatrixGame : public CForm {
	private:
		float m_LastWorldX,m_LastWorldY;
		int m_Action;

        SKeyScan m_LastScans[MAX_SCANS];
	public:
		CFormMatrixGame(void);
		~CFormMatrixGame();

		virtual void Enter(void);
		virtual void Leave(void);
		virtual void Draw(void);

		virtual void Takt(int step);

		virtual void MouseMove(int x,int y);
		virtual void MouseKey(ButtonStatus status,int key,int x,int y);

        virtual void Keyboard(bool down, int scan);
        virtual void SystemEvent(ESysEvent se);
};
