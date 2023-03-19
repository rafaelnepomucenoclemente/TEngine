#pragma once
#include "GridView.h"
#include "AnimationDoc.h"


// CAnimationView ���Դϴ�.

class CAnimationView : public CGridView
{
	DECLARE_DYNCREATE(CAnimationView)

protected:
	CAnimationView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CAnimationView();

public:
	CAnimationDoc* GetDocument();

protected:
	D3DXVECTOR3 m_vMove;

protected:
	virtual void DrawContent();
	virtual void InitCamera();
	virtual BYTE IsPlay();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
	afx_msg void OnGridCamreset();
};

inline CAnimationDoc* CAnimationView::GetDocument()
   { return (CAnimationDoc *) m_pDocument;}
