#pragma once
#include "TachyonDoc.h"
#include "PlayCtrlBar.h"
#include "ImageBar.h"
#include "ItemBase.h"


// CImageDoc �����Դϴ�.

class CImageDoc : public CTachyonDoc
{
	DECLARE_DYNCREATE(CImageDoc)

public:
	CImageDoc();
	virtual ~CImageDoc();
	virtual void Serialize(CArchive& ar);   // ���� ��/����� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	CImageBar *GetImageBar();
	CPlayCtrl *GetPlayCtrl();

	void RedrawAllView();

public:
	CImageItem* m_pItem;
	DWORD m_dwTick;

public:
	virtual void InitData( LPVOID pData);
	virtual void Update();

	virtual void DeleteForRestore();
	virtual void Restore();

protected:
	virtual BOOL OnNewDocument();

	DECLARE_MESSAGE_MAP()
};
