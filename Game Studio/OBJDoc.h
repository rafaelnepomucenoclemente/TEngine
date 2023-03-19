#pragma once
#include "GridDoc.h"
#include "PlayCtrlBar.h"
#include "OBJBar.h"


// COBJDoc �����Դϴ�.

class COBJDoc : public CGridDoc
{
	DECLARE_DYNCREATE(COBJDoc)

public:
	COBJDoc();
	virtual ~COBJDoc();
	virtual void Serialize(CArchive& ar);   // ���� ��/����� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	CPlayCtrl *GetPlayCtrl();
	COBJBar *GetOBJBar();

	void RedrawAllView();
	void ResetCamera();

	void CalcSFX( DWORD dwTick);
	void RemoveSFX();

public:
	MAPDWORD m_mapEQUIP;

	COBJItem* m_pItem;
	OBJHIT m_vHIT;

public:
	virtual void InitData( LPVOID pData);
	virtual void Update();

protected:
	virtual BOOL OnNewDocument();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnObjEditAttr();
};
