#pragma once
#include "GridDoc.h"
#include "MeshBar.h"


// CMeshDoc �����Դϴ�.

class CMeshDoc : public CGridDoc
{
	DECLARE_DYNCREATE(CMeshDoc)

public:
	CMeshDoc();
	virtual ~CMeshDoc();
	virtual void Serialize(CArchive& ar);   // ���� ��/����� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	CMeshBar *GetMeshBar();

public:
	CMeshItem* m_pItem;

	LPBYTE m_pCheck;
	int m_nCurSel;

public:
	virtual void InitData( LPVOID pData);
	virtual void Update();

	void RedrawAllView();
	void SetCamDist(
		CWnd *pWnd,
		FLOAT fDist);

protected:
	virtual BOOL OnNewDocument();

	DECLARE_MESSAGE_MAP()
};
