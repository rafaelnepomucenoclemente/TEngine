#pragma once
#include "GuideDoc.h"
#include "FRAMEBar.h"


// CFRAMEDoc �����Դϴ�.

class CFRAMEDoc : public CGuideDoc
{
	DECLARE_DYNCREATE(CFRAMEDoc)

public:
	CFRAMEDoc();
	virtual ~CFRAMEDoc();
	virtual void Serialize(CArchive& ar);   // ���� ��/����� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	CFRAMEBar *GetFRAMEBar();

public:
	CFRAMEItem* m_pItem;

public:
	virtual void InitData( LPVOID pData);
	virtual void Update();

	virtual void SetCurSel( int nIndex);
	virtual CSize GetSize();

protected:
	virtual BOOL OnNewDocument();

	DECLARE_MESSAGE_MAP()
};
