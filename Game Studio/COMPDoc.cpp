// COMPDoc.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "COMPFrame.h"
#include "COMPDoc.h"


// CCOMPDoc

IMPLEMENT_DYNCREATE(CCOMPDoc, CGuideDoc)

CCOMPDoc::CCOMPDoc()
{
	m_bDocType = ITEM_COMP;
	m_pItem = NULL;
}

BOOL CCOMPDoc::OnNewDocument()
{
	if (!CGuideDoc::OnNewDocument())
		return FALSE;
	return TRUE;
}

CCOMPDoc::~CCOMPDoc()
{
	if(m_pItem)
	{
		m_pItem->SetMainDocument(NULL);
		m_pItem = NULL;
	}
}


BEGIN_MESSAGE_MAP(CCOMPDoc, CGuideDoc)
END_MESSAGE_MAP()


// CCOMPDoc �����Դϴ�.

#ifdef _DEBUG
void CCOMPDoc::AssertValid() const
{
	CGuideDoc::AssertValid();
}

void CCOMPDoc::Dump(CDumpContext& dc) const
{
	CGuideDoc::Dump(dc);
}
#endif //_DEBUG


// CCOMPDoc serialization�Դϴ�.

void CCOMPDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}


// CCOMPDoc ����Դϴ�.

CCOMPBar *CCOMPDoc::GetCOMPBar()
{
	CCOMPFrame *pFrame = (CCOMPFrame *) GetFrameWnd();
	return pFrame ? &pFrame->m_wndCOMPBar : NULL;
}

void CCOMPDoc::InitData( LPVOID pData)
{
	CTachyonDoc::InitData(pData);
	if(!pData)
		return;

	m_pItem = (CCOMPItem *) pData;
	m_pItem->SetMainDocument(this);
	m_pGuide = m_pItem;

	Update();
}

void CCOMPDoc::Update()
{
	if(m_pItem)
	{
		CCOMPBar *pControl = GetCOMPBar();

		SetTitle(m_pItem->m_strName);
		m_pItem->Regulate();

		if(pControl)
			pControl->SetItem(m_pItem);

		CGuideDoc::Update();
	}
}

CSize CCOMPDoc::GetSize()
{
	return m_pItem->GetSize() + CSize( GNC_SIZE_X, GNC_SIZE_Y);
}

void CCOMPDoc::SetCurSel( int nIndex)
{
	CCOMPBar *pControl = GetCOMPBar();

	pControl->m_cCOMP.SetCurSel(nIndex);
	pControl->ResetCOMP(pControl->m_cCOMP.GetCurSel());
}
