#pragma once
#include "TachyonDoc.h"
#include "ItemBase.h"


// COBJTypeDoc �����Դϴ�.

class COBJTypeDoc : public CTachyonDoc
{
	DECLARE_DYNCREATE(COBJTypeDoc)

public:
	COBJTypeDoc();
	virtual ~COBJTypeDoc();
	virtual void Serialize(CArchive& ar);   // ���� ��/����� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	COBJTypeItem* m_pItem;

public:
	virtual void InitData( LPVOID pData);
	virtual void Update();

protected:
	virtual BOOL OnNewDocument();
	DECLARE_MESSAGE_MAP()
};
