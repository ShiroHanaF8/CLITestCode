
// MFCTestCodeDlg.cpp : 実装ファイル
//

#include "pch.h"
#include "framework.h"
#include "MFCTestCode.h"
#include "MFCTestCodeDlg.h"
#include "afxdialogex.h"
#include "CppCalc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTestCodeDlg ダイアログ



CMFCTestCodeDlg::CMFCTestCodeDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCTESTCODE_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCTestCodeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC_LABEL, m_label);
	DDX_Control(pDX, IDC_STATIC_LABEL2, m_label2);
}

BEGIN_MESSAGE_MAP(CMFCTestCodeDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_ADD, &CMFCTestCodeDlg::OnBnClickedButtonAdd)
END_MESSAGE_MAP()


// CMFCTestCodeDlg メッセージ ハンドラー

BOOL CMFCTestCodeDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// このダイアログのアイコンを設定します。アプリケーションのメイン ウィンドウがダイアログでない場合、
	//  Framework は、この設定を自動的に行います。
	SetIcon(m_hIcon, TRUE);			// 大きいアイコンの設定
	SetIcon(m_hIcon, FALSE);		// 小さいアイコンの設定

	UpdateCount();

	return TRUE;  // フォーカスをコントロールに設定した場合を除き、TRUE を返します。
}

void CMFCTestCodeDlg::UpdateCount()
{
	CString str;
	str.Format(_T("%d"), m_count);
	m_label.SetWindowTextW(str);

	CString str2;
	str2.Format(_T("%d"), m_count2);
	m_label2.SetWindowTextW(str2);
}

// ダイアログに最小化ボタンを追加する場合、アイコンを描画するための
//  下のコードが必要です。ドキュメント/ビュー モデルを使う MFC アプリケーションの場合、
//  これは、Framework によって自動的に設定されます。

void CMFCTestCodeDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 描画のデバイス コンテキスト

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// クライアントの四角形領域内の中央
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// アイコンの描画
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ユーザーが最小化したウィンドウをドラッグしているときに表示するカーソルを取得するために、
//  システムがこの関数を呼び出します。
HCURSOR CMFCTestCodeDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCTestCodeDlg::OnBnClickedButtonAdd()
{
	m_count = CppCalc::Calc();
	m_count2 = CppCalc::CalcWrap();
	UpdateCount();
}
