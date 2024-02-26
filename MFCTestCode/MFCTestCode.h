
// MFCTestCode.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMFCTestCodeApp:
// このクラスの実装については、MFCTestCode.cpp を参照してください
//

class CMFCTestCodeApp : public CWinApp
{
public:
	CMFCTestCodeApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CMFCTestCodeApp theApp;
