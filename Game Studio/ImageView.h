#pragma once
#include "ImageDoc.h"


// CImageView ���Դϴ�.

class CImageView : public CScrollView
{
	DECLARE_DYNCREATE(CImageView)

protected:
	CImageView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CImageView();

public:
	CImageDoc* GetDocument();
	void Render();

#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	void ResetScrollSize();

public:
	virtual void DeleteForRestore();
	virtual void Restore();

protected:
	virtual void OnDraw(CDC* pDC);      // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual void OnInitialUpdate();     // ������ �� ó���Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnDestroy();
};

inline CImageDoc* CImageView::GetDocument()
   { return (CImageDoc *) m_pDocument;}
