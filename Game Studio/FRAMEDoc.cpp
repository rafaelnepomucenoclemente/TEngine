// FRAMEDoc.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "FRAMEFrame.h"
#include "FRAMEDoc.h"


// CFRAMEDoc

IMPLEMENT_DYNCREATE(CFRAMEDoc, CGuideDoc)

CFRAMEDoc::CFRAMEDoc()
{
	m_bDocType = ITEM_COMP;
	m_pItem = NULL;
}

BOOL CFRAMEDoc::OnNewDocument()
{
	if (!CGuideDoc::OnNewDocument())
		return FALSE;
	return TRUE;
}

CFRAMEDoc::~CFRAMEDoc()
{
	if(m_pItem)
	{
		m_pItem->SetMainDocument(NULL);
		m_pItem = NULL;
	}
}


BEGIN_MESSAGE_MAP(CFRAMEDoc, CGuideDoc)
END_MESSAGE_MAP()


// CFRAMEDoc �����Դϴ�.

#ifdef _DEBUG
void CFRAMEDoc::AssertValid() const
{
	CGuideDoc::AssertValid();
}

void CFRAMEDoc::Dump(CDumpContext& dc) const
{
	CGuideDoc::Dump(dc);
}
#endif //_DEBUG


// CFRAMEDoc serialization�Դϴ�.

void CFRAMEDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}


// CFRAMEDoc ����Դϴ�.

CFRAMEBar *CFRAMEDoc::GetFRAMEBar()
{
	CFRAMEFrame *pFrame = (CFRAMEFrame *) GetFrameWnd();
	return pFrame ? &pFrame->m_wndFRAMEBar : NULL;
}

void CFRAMEDoc::InitData( LPVOID pData)
{
	CTachyonDoc::InitData(pData);
	if(!pData)
		return;

	m_pItem = (CFRAMEItem *) pData;
	m_pItem->SetMainDocument(this);
	m_pGuide = m_pItem;

	Update();
}

void CFRAMEDoc::Update()
{
	if(m_pItem)
	{
		CFRAMEBar *pControl = GetFRAMEBar();

		SetTitle(m_pItem->m_strName);
		m_pItem->Regulate();

		if(pControl)
			pControl->SetItem(m_pItem);

		CGuideDoc::Update();
	}
}

CSize CFRAMEDoc::GetSize()
{
	return m_pItem->GetSize() + CSize( GNC_SIZE_X, GNC_SIZE_Y);
}

void CFRAMEDoc::SetCurSel( int nIndex)
{
	CFRAMEBar *pControl = GetFRAMEBar();

	pControl->m_cCTRL.SetCurSel(nIndex);
	pControl->ResetCTRL(pControl->m_cCTRL.GetCurSel());
}
