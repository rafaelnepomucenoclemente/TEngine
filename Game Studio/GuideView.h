#pragma once
#include "GuideDoc.h"
#include "GSToolTipWnd.h"
#include "atltypes.h"


#define GH_NONE				((BYTE) 0x00)		// �ƹ��͵� ���õ��� ���� ����
#define GH_GUIDE_X			((BYTE) 0x01)		// X �귯�� ���� ����
#define GH_GUIDE_Y			((BYTE) 0x02)		// Y �귯�� ���� ����
#define GH_ITEM				((BYTE) 0x03)		// �������� ���� ����

// MS - Mouse State
#define GH_MS_NONE			((BYTE) 0x00)		
#define GH_MS_MLBPUSH		((BYTE) 0x01)		// ���콺�� ���� ��ư�� Push�� ����
#define GH_MS_MOVE			((BYTE) 0x03)		// ���콺�� �����̴� ����



typedef struct tagGUIDEHIT
{
	CPoint m_point;

	BYTE m_bType;
	int m_nHIT;

	tagGUIDEHIT()
	{
		m_bType = GH_NONE;
		m_nHIT = -1;

		m_point.x = 0;
		m_point.y = 0;
	};
} GUIDEHIT, *LPGUIDEHIT;

typedef vector<short>	VECTORSELITEM;

// CGuideView ���Դϴ�.

class CGuideView : public CScrollView
{
	DECLARE_DYNCREATE(CGuideView)

protected:
	CGuideView();
	virtual ~CGuideView();

public:
	CGuideDoc* GetDocument();
	void Render();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	static CGSToolTipWnd m_wndToolTip;

protected:
	CPoint GetNearPoint( CPoint point);
	CPoint GetHotPoint( CPoint point);
	CPoint GetTLPoint( CPoint point);

	void MoveItem( CPoint point);
	void ResetScrollSize();
	void DrawToolTip();
	void DrawGuide();

	BOOL IsSelectedItem(int nSelected);
	void DeleteSelectedITEM(int nSelected);
	void InsertSelectITEM(int nSelect);
	BOOL IsPreRectInDrag(int nSelect);
	void DeletePreRectInITEM(int nSelected);
	void InsertPreRectInITEM(int nSelect);

protected:
	COleDropTarget m_DropTarget;

	UINT_PTR m_nTimer;
	GUIDEHIT m_vHIT;

public:
	virtual void DeleteForRestore();
	virtual void Restore();

protected:
	virtual BOOL OnScrollBy( CSize sizeScroll, BOOL bDoScroll = TRUE);
	virtual void OnDraw( CDC* pDC);
	virtual void OnInitialUpdate();

	virtual BYTE CanDrop( CItemBase *pItem);

	virtual CRect GetItemRect( CPoint point);
	virtual CRect GetItemRect(int nCnt);
	virtual void DoMoveItem( CPoint point);
	virtual void AddItem( CItemBase *pItem);

	virtual GUIDEHIT HitTest( CPoint point);
	virtual CRect GetItemRect();
	virtual void DrawContent();
	virtual void HitTestRect(CRect rect);

public:
	DECLARE_MESSAGE_MAP()
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnDestroy();
	virtual DROPEFFECT OnDragEnter(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
	virtual void OnDragLeave();
	virtual DROPEFFECT OnDragOver(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
	virtual BOOL OnDrop(COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point);
	virtual CRect GetSelectItemRECT(void);	
	virtual void MoveItemByKeyBoard(CPoint pt);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	virtual CPoint GetRectDist(void);
};

inline CGuideDoc* CGuideView::GetDocument()
	{ return (CGuideDoc *) m_pDocument;}
