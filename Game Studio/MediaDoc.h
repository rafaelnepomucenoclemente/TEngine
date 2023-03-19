#pragma once
#include "TachyonDoc.h"
#include "PlayCtrl.h"
#include "ItemBase.h"
#include "MediaDlg.h"


// CMediaDoc �����Դϴ�.

class CMediaDoc : public CTachyonDoc
{
	DECLARE_DYNCREATE(CMediaDoc)

public:
	CMediaDoc();
	virtual ~CMediaDoc();
	virtual void Serialize(CArchive& ar);   // ���� ��/����� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	CMediaDlg *GetMediaDlg();
	CPlayCtrl *GetPlayCtrl();

public:
	CMediaItem* m_pItem;
	int m_nIndex;

public:
	virtual void InitData( LPVOID pData);
	virtual void Update();

protected:
	virtual BOOL OnNewDocument();

	DECLARE_MESSAGE_MAP()
};
