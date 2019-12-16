#include "CConstructor.h"

class CHistory : public CMain {
    SRobotConfig* m_CurrentConfig;
    
    void LoadCurrentConfigToConstructor();
    void DelConfig(SRobotConfig *config);
    void FindConfig(SRobotConfig *config);

public:
    SRobotConfig* m_FirstConfig;
    SRobotConfig* m_LastConfig;

    void AddConfig(SRobotConfig *config);
    void __stdcall PrevConfig(void *object);
    void __stdcall NextConfig(void *object);

    bool IsNext()                                                       { if(m_CurrentConfig && m_CurrentConfig->m_NextConfig)return true;else return false; }
    bool IsPrev()                                                       { if(m_CurrentConfig && m_CurrentConfig->m_PrevConfig)return true;else return false; }

    CHistory();
    ~CHistory();
};