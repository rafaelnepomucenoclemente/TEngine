#pragma once
#include "GridView.h"
#include "OBJDoc.h"


// COBJView ���Դϴ�.

class COBJView : public CGridView
{
	DECLARE_DYNCREATE(COBJView)

protected:
	COBJView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~COBJView();

public:
	COBJDoc* GetDocument();

protected:
	COleDropTarget m_DropTarget;
	D3DXVECTOR3 m_vMove;

protected:
	void InsertTexture( CTextureItem *pItem);
	void RemoveTexture(
		LPMESH pMESH,
		DWORD dwID);

protected:
	virtual void DrawContent();
	virtual void InitCamera();
	virtual BYTE IsPlay();

	BYTE CanDrop( CItemBase *pItem);

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	DECLARE_MESSAGE_MAP()
	virtual void OnInitialUpdate();
	virtual DROPEFFECT OnDragEnter(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
	virtual DROPEFFECT OnDragOver(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
	virtual BOOL OnDrop(COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point);
	virtual void OnDragLeave();
	afx_msg void OnGridCamreset();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

inline COBJDoc* COBJView::GetDocument()
   { return (COBJDoc *) m_pDocument;}
