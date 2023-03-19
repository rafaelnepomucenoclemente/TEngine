// TImageList.h: interface for the TImageList class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TIMAGELIST_H__32028F19_B866_4E3C_8120_CB3D8EE18F87__INCLUDED_)
#define AFX_TIMAGELIST_H__32028F19_B866_4E3C_8120_CB3D8EE18F87__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// =====================================================================
/**	@class		TImageList
	@brief		������ �̹����� �����ϸ� �ѹ��� �ϳ��� �̹����� ���� �� 
				�� �ִ� ������Ʈ�̴�.
	
*/// ===================================================================
class TImageList : public TComponent  
{
public:
	/// �̹�������Ʈ�� ��ǥ�ϴ� Ŭ�����̴�.
	class TDelegate : public TComponent
	{
	public:
		/// �־��� �̹�������Ʈ�� CurIdx�� �����Ͽ� �����Ѵ�.
		TComponent* RenderImgList( TImageList* pImgList, DWORD dwCurTick, DWORD dwDeltaTick);
		/// �־��� �̹���(pImgComp)�� �����Ͽ� �����Ѵ�.
		void RenderImgComp( TImageList* pImgList, TComponent* pImgComp, DWORD dwCurTick, DWORD dwDeltaTick);
		/// �־��� �̹�������Ʈ�� �����Ͽ� �����˻縦 �����Ѵ�.
		BOOL HitRectDelegate( TImageList* pImgList, CPoint pt);
		/// �־��� �̹�������Ʈ�� �����Ͽ� �浹�˻縦 �����Ѵ�.
		BOOL HitTestDelegate( TImageList* pImgList, CPoint pt);
		/// �̹����� ��ü ������ ��´�.
		int GetImageCount();
		/// �̹��� ���
		TComponent* GetImage( int nIndex );

	public:
		TDelegate(LP_FRAMEDESC pDesc);
		~TDelegate();
	};

	/// ��ǥ�� �ν��Ͻ��� �����ϱ����� Ŭ�����̴�.
	class TDelegateManager
	{
	public:
		struct InstKey
		{
			LP_FRAMEDESC	m_pDesc;

			InstKey(LP_FRAMEDESC pDesc)
			:	 m_pDesc(pDesc)
			{}

			bool operator < (const InstKey& r) const;
		};

		struct InstData
		{
			int				m_nRefCnt;	///< ���� ī��Ʈ
			TDelegate*		m_pInst;	///< ��ǥ��

			InstData(TDelegate* pInst)
			:	 m_nRefCnt(1),
				 m_pInst(pInst)
			{}
		};
		
	private:
		typedef std::map<InstKey, InstData> TDELEGATEMAP;

	protected:
		/// LP_FRAMEDESC �� ��ǥ�ڸ� �����ϱ����� ��.
		TDELEGATEMAP m_mapDelegates;

	public:
		TDelegate* NewInstance(LP_FRAMEDESC pDesc);
		void ReleaseInstance(TDelegate* pInst);
	};

protected:
	/// ��ǥ �ν��Ͻ��� ������
	static TDelegateManager m_Manager;

protected:
	int			m_nCurIdx;		///< ���� ���õ� �̹����� �ε���
	int			m_nLastIdx;		///< ���� �ֱٿ� �׷��� �̹����� �ε���
	TComponent*	m_pLastImg;		///< ���� �ֱٿ� �׷��� �̹���
	TComponent*	m_pSkinImg;		///< ��Ų
	
	BOOL		m_bUserColor;	///< ������ ���� ���� ������� ����
	DWORD		m_dwUserColor;	///< ������ ���� ��
	BOOL		m_bUsePixelHitTest; ///< �ȼ������� HitTest �˻� ����

	TDelegate*	m_pDelegate;	///< ��ǥ �ν��Ͻ�

protected:
	virtual void BuildKid( LP_FRAMEDESC pDesc );
	
public:
	virtual BOOL HitRect( CPoint pt);
	virtual BOOL HitTest( CPoint pt);
	virtual HRESULT Render( DWORD dwTickCount);
	
public:
	BOOL EndOfImgs( TCOMP_LIST::iterator it );
	TCOMP_LIST::iterator GetFirstImgsFinder();
	TComponent* GetNextImg( TCOMP_LIST::iterator &it );

protected:
	void InitRect();

public:
	void SetCurImage(int nIndex)		{ m_nCurIdx = nIndex; }
	int GetCurImage()					{ return m_nCurIdx; }

	void EnableUserColor(BOOL bEnable)	{ m_bUserColor = bEnable; }
	BOOL IsUserColorEnabled()			{ return m_bUserColor; }

	void SetUserColor(DWORD dwColor)	{ m_dwUserColor = dwColor; }
	DWORD GetUserColor()				{ return m_dwUserColor; }

	int GetImageCount()					{ return m_pDelegate->GetImageCount(); }
	TDelegate* GetDelegate()			{ return m_pDelegate; }

	void SetPixelHitTest(BOOL bUse)	{ m_bUsePixelHitTest = bUse; }

	void SetSkinImage( int nIndex );
	void SetSkinImageEmpty();

	void UpdateLastImg() { m_nLastIdx = -1; }

public:
	TImageList(TComponent *pParent, LP_FRAMEDESC pDesc);
	virtual ~TImageList();
};

#endif // !defined(AFX_TIMAGELIST_H__32028F19_B866_4E3C_8120_CB3D8EE18F87__INCLUDED_)



















