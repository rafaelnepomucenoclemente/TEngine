// OBJTypeDoc.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "OBJTypeDoc.h"


// COBJTypeDoc

IMPLEMENT_DYNCREATE(COBJTypeDoc, CTachyonDoc)

COBJTypeDoc::COBJTypeDoc()
{
	m_bDocType = ITEM_OBJTYPE;
	m_pItem = NULL;
}

BOOL COBJTypeDoc::OnNewDocument()
{
	if (!CTachyonDoc::OnNewDocument())
		return FALSE;
	return TRUE;
}

COBJTypeDoc::~COBJTypeDoc()
{
	if(m_pItem)
	{
		m_pItem->SetMainDocument(NULL);
		m_pItem = NULL;
	}
}


BEGIN_MESSAGE_MAP(COBJTypeDoc, CTachyonDoc)
END_MESSAGE_MAP()


// COBJTypeDoc �����Դϴ�.

#ifdef _DEBUG
void COBJTypeDoc::AssertValid() const
{
	CTachyonDoc::AssertValid();
}

void COBJTypeDoc::Dump(CDumpContext& dc) const
{
	CTachyonDoc::Dump(dc);
}
#endif //_DEBUG


// COBJTypeDoc serialization�Դϴ�.

void COBJTypeDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	}
	else
	{
		// TODO: ���⿡ �ε� �ڵ带 �߰��մϴ�.
	}
}


// COBJTypeDoc ����Դϴ�.

void COBJTypeDoc::InitData( LPVOID pData)
{
	CTachyonDoc::InitData(pData);
	if(!pData)
		return;

	m_pItem = (COBJTypeItem *) pData;
	m_pItem->SetMainDocument(this);

	Update();
}

void COBJTypeDoc::Update()
{
	if(m_pItem)
	{
		SetTitle(m_pItem->m_strName);
		m_pItem->Regulate();
	}

	UpdateAllViews(NULL);
}
