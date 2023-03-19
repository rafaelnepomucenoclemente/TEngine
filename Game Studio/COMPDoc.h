#pragma once
#include "GuideDoc.h"
#include "COMPBar.h"


// CCOMPDoc �����Դϴ�.

class CCOMPDoc : public CGuideDoc
{
	DECLARE_DYNCREATE(CCOMPDoc)

public:
	CCOMPDoc();
	virtual ~CCOMPDoc();
	virtual void Serialize(CArchive& ar);   // ���� ��/����� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	CCOMPBar *GetCOMPBar();

public:
	CCOMPItem* m_pItem;

public:
	virtual void InitData( LPVOID pData);
	virtual void Update();

	virtual void SetCurSel( int nIndex);
	virtual CSize GetSize();

protected:
	virtual BOOL OnNewDocument();

	DECLARE_MESSAGE_MAP()
};
