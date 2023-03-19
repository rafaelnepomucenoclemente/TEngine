#pragma once
#include "GridDoc.h"
#include "PlayCtrlBar.h"
#include "ParticleBar.h"
#include "SFXBar.h"


// CSFXDoc �����Դϴ�.

class CSFXDoc : public CGridDoc
{
	DECLARE_DYNCREATE(CSFXDoc)

public:
	CSFXDoc();
	virtual ~CSFXDoc();
	virtual void Serialize(CArchive& ar);   // ���� ��/����� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	CPlayCtrl *GetPlayCtrl();

	CParticleBar *GetParticleBar();
	CSFXBar *GetSFXBar();

	void SetFPS( DWORD dwFPS );

public:
	CSFXItem* m_pItem;

public:
	virtual void InitData( LPVOID pData);
	virtual void Update();

	void RedrawAllView();

protected:
	virtual BOOL OnNewDocument();

	DECLARE_MESSAGE_MAP()
};
