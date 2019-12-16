#include "stdafx.h"
#include "CIFaceImage.h"

CIFaceImage::CIFaceImage()
{
	m_Image           = NULL;
    m_PrevImage       = NULL;
    m_NextImage       = NULL;
	m_xTexPos         = 0;
	m_yTexPos         = 0;
	m_TexWidth        = 0;
	m_TexHeight       = 0;
    m_Width           = 0;
    m_Height          = 0;
    m_strName         = L"";
    m_Type            = IFACE_IMAGE;
}

CIFaceImage::~CIFaceImage()
{
}
