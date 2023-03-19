#pragma once
#include "TachyonDoc.h"


// CGridDoc �����Դϴ�.

class CGridDoc : public CTachyonDoc
{
	DECLARE_DYNCREATE(CGridDoc)

public:
	CGridDoc();
	virtual ~CGridDoc();
	virtual void Serialize(CArchive& ar);   // ���� ��/����� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	virtual void DeleteForRestore();
	virtual void Restore();

protected:
	virtual BOOL OnNewDocument();

	DECLARE_MESSAGE_MAP()
};
