
// MFCTestCodeDlg.h : ヘッダー ファイル
//

#pragma once


// CMFCTestCodeDlg ダイアログ
class CMFCTestCodeDlg : public CDialogEx
{
// コンストラクション
public:
	CMFCTestCodeDlg(CWnd* pParent = nullptr);	// 標準コンストラクター

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCTESTCODE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	void UpdateCount();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedButtonAdd();
	CStatic m_label;
	CStatic m_label2;
	int m_count = 0;
	int m_count2 = 0;
};
