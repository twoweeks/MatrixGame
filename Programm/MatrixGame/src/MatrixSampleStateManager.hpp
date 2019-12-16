#ifndef MATRIX_SAMPLER_INCLUDE
#define MATRIX_SAMPLER_INCLUDE

class CMatrixSampleStateManager
{
public:
	int m_AFDegree;

	void ApplySettings(SRobotsSettings* set);
	HRESULT SetState(DWORD sampler, D3DSAMPLERSTATETYPE type, DWORD value);

	CMatrixSampleStateManager(void);
	~CMatrixSampleStateManager(void);

private:
	bool EligibleForAnisotropy( D3DSAMPLERSTATETYPE type );
};

extern CMatrixSampleStateManager g_Sampler;

#endif
