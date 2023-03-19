#pragma once
#include "MediaDoc.h"


// CMediaView ���Դϴ�.

class CMediaView : public CView
{
	DECLARE_DYNCREATE(CMediaView)

protected:
	CMediaView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CMediaView();

public:
	CMediaDoc* GetDocument();

	virtual void OnDraw(CDC* pDC);      // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
	afx_msg void OnWindowPosChanged(WINDOWPOS* lpwndpos);
	afx_msg void OnDestroy();
};

inline CMediaDoc* CMediaView::GetDocument()
   { return (CMediaDoc *) m_pDocument;}
