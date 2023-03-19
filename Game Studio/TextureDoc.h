#pragma once
#include "TachyonDoc.h"
#include "PlayCtrlBar.h"
#include "TextureBar.h"

#define RT_SPHERE				((BYTE) 0x00)
#define RT_BOX					((BYTE) 0x01)
#define RT_PLANE				((BYTE) 0x02)


// CTextureDoc �����Դϴ�.

class CTextureDoc : public CTachyonDoc
{
	DECLARE_DYNCREATE(CTextureDoc)

public:
	CTextureDoc();
	virtual ~CTextureDoc();
	virtual void Serialize(CArchive& ar);   // ���� ��/����� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	CTextureBar *GetTextureBar();
	CPlayCtrl *GetPlayCtrl();

	void RedrawAllView();
	void InitDraw();

public:
	D3DXMATRIX m_matObject;

	CTextureItem* m_pItem;
	BYTE m_bRenderType;
	BYTE m_bApplyMode;

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
