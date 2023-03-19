#pragma once
#include "OBJTypeDoc.h"
#include "ATTRPage.h"
#include "OBJPage.h"


// COBJTypeView ���Դϴ�.

class COBJTypeView : public CView
{
	DECLARE_DYNCREATE(COBJTypeView)

protected:
	COBJTypeView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~COBJTypeView();

public:
	COBJTypeDoc* GetDocument();

public:
	virtual void OnDraw(CDC* pDC);      // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	CImageList m_listTabImages;

	CPropertySheet m_wndSHEET;
	CATTRPage m_wndATTR;
	COBJPage m_wndOBJ;

public:
	DECLARE_MESSAGE_MAP()
	virtual void OnInitialUpdate();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnDestroy();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

inline COBJTypeDoc* COBJTypeView::GetDocument()
   { return (COBJTypeDoc *) m_pDocument;}
