
// MFCApplication1Dlg.h: файл заголовка
//

#pragma once
#include "afxwin.h"


// Диалоговое окно CMFCApplication1Dlg
class CMFCApplication1Dlg : public CDialog
{
// Создание
public:
	CMFCApplication1Dlg(CWnd* pParent = NULL);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int r;
	bool f;
	double value,m;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedButton2();
	CButton but;
	afx_msg void OnBnClickedButton3();
	afx_msg void two();
	afx_msg void three();
	afx_msg void plus();
	afx_msg void minus();
	afx_msg void answer();
	afx_msg void four();
	afx_msg void five();
	afx_msg void six();
	afx_msg void seven();
	afx_msg void eight();
	afx_msg void nine();
	double text;
	afx_msg void lost();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton20();
	CButton Delenie;
	CButton Koren;
	CButton XvKvadrate;
	CButton DelimNaX;
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton18();
	CButton First;
	CButton Second;
	void Change(int Ch);
	CString Switch;
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox switchNew;
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton22();
	CButton tangens;
	CButton Cotangens;
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton25();
	CButton openBracket;
	CButton closeBracker;
	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton26();
	CButton changer;
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton29();
	CButton asin;
	CButton acos;
	afx_msg void OnBnClickedButton28();
	CButton kgtg;
	CButton mtcm;
	CButton CtF;
	afx_msg void OnBnClickedButton30();
	afx_msg void OnBnClickedButton31();
	afx_msg void OnBnClickedButton32();
	CButton log;
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton36();
	afx_msg void OnBnClickedButton37();
	CButton expa;
	CButton xVy;
	CButton tenVx;
	CButton xVkube;
	afx_msg void OnBnClickedButton38();
	CButton nKoren;
	afx_msg void OnBnClickedButton39();
	CButton expanenta;
	afx_msg void OnBnClickedButton40();
};
