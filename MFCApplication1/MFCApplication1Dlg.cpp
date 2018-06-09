
// MFCApplication1Dlg.cpp: файл реализации
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"
#include <math.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif





CMFCApplication1Dlg::CMFCApplication1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_MFCAPPLICATION1_DIALOG, pParent)
	, text(0)
{
	r = 0;
	value = 0;
	m = 1;
	f = 0;
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON2, but);
	DDX_Text(pDX, IDC_EDIT2, text);

	DDX_Control(pDX, IDC_BUTTON20, Delenie);
	DDX_Control(pDX, IDC_BUTTON17, Koren);
	DDX_Control(pDX, IDC_BUTTON19, XvKvadrate);
	DDX_Control(pDX, IDC_BUTTON18, DelimNaX);
}

BEGIN_MESSAGE_MAP(CMFCApplication1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT2, &CMFCApplication1Dlg::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication1Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication1Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplication1Dlg::two)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCApplication1Dlg::three)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCApplication1Dlg::plus)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCApplication1Dlg::minus)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCApplication1Dlg::answer)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCApplication1Dlg::four)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCApplication1Dlg::five)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCApplication1Dlg::six)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCApplication1Dlg::seven)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCApplication1Dlg::eight)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplication1Dlg::nine)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCApplication1Dlg::lost)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication1Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCApplication1Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON20, &CMFCApplication1Dlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCApplication1Dlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON19, &CMFCApplication1Dlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFCApplication1Dlg::OnBnClickedButton18)
END_MESSAGE_MAP()



BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	SetIcon(m_hIcon, TRUE);			
	return TRUE; 
}

void CMFCApplication1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); 

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

HCURSOR CMFCApplication1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




void CMFCApplication1Dlg::OnEnChangeEdit2()
{
}


void CMFCApplication1Dlg::OnBnClickedButton2()
{
	if (!f)
	{
		text = text * 10.0 + 0;
	}
	else
	{
		text = text + 0.0 / pow(10.0, m);
		m++;
	}
	UpdateData(false);
}

void CMFCApplication1Dlg::OnBnClickedButton3()
{
	if (!f)
	{
		text = text * 10.0 + 1;
	}
	else
	{
		text = text + 1.0 / pow(10.0, m);
		m++;
	}
	
	UpdateData(false);
}


void CMFCApplication1Dlg::two()
{
	if (!f)
	{
		text = text * 10.0 + 2;
	}
	else
	{
		text = text + 2.0 / pow(10.0, m);
		m++;
	}
	UpdateData(false);
}


void CMFCApplication1Dlg::three()
{
	if (!f)
	{
		text = text * 10.0 + 3;
	}
	else
	{
		text = text + 3.0 / pow(10.0, m);
		m++;
	}
	UpdateData(false);
}


void CMFCApplication1Dlg::plus()
{
	value = text;
	r = '+';
	m = 1;
	text = 0;
}


void CMFCApplication1Dlg::minus()
{
	value = text;
	r = '-';
	m = 1;
	text = 0;
}


void CMFCApplication1Dlg::answer()
{
	switch (r)
	{
		case '+':
		{
			text = text + value;
			break;
		}
		case '-':
		{
			text = value - text;
			break;
		}
		case 'x':
		{	text = value * text;
			break;
		}
		case 'V':
		{	text = sqrt(value);
			break;
		}
		case '1/x':
		{	text = 1 / value;
			break;
		}
		case 'x^2':
		{	text = value * value;
			break;
		}
		case '/':
		{	text = value / text;
			break;
		}
	}
	UpdateData(false);
	text = text;
	m = 1;
}


void CMFCApplication1Dlg::four()
{
	if (!f)
	{
		text = text * 10.0 + 4;
	}
	else
	{
		text = text + 4.0 / pow(10.0, m);
		m++;
	}
	UpdateData(false);
}


void CMFCApplication1Dlg::five()
{
	if (!f)
	{
		text = text * 10.0 + 5;
	}
	else
	{
		text = text + 5.0 / pow(10.0, m);
		m++;
	}
	UpdateData(false);
}


void CMFCApplication1Dlg::six()
{
	if (!f)
	{
		text = text * 10.0 + 6;
	}
	else
	{
		text = text + 6.0 / pow(10.0, m);
		m++;
	}
	UpdateData(false);
}


void CMFCApplication1Dlg::seven()
{
	if (!f)
	{
		text = text * 10.0 + 7;
	}
	else
	{
		text = text + 7.0 / pow(10.0, m);
		m++;
	}
	UpdateData(false);
}


void CMFCApplication1Dlg::eight()
{
	if (!f)
	{
		text = text * 10.0 + 8;
	}
	else
	{
		text = text + 8.0 / pow(10.0, m);
		m++;
	}
	UpdateData(false);
}


void CMFCApplication1Dlg::nine()
{
	if (!f)
	{
		text = text * 10.0 + 9;
	}
	else
	{
		text = text + 9.0 / pow(10.0, m);
		m++;
	}
	UpdateData(false);
}


void CMFCApplication1Dlg::lost()
{
	text = 0;
	m = 1;
	f = 0;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton1()
{
	f = 1;
}


void CMFCApplication1Dlg::OnBnClickedButton16()
{
	value = text;
	r = 'x';
	text = 0;
	UpdateData(false);
}





void CMFCApplication1Dlg::OnBnClickedButton20()
{
	value = text;
	r = '/';
	text = 0;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton17()
{
	value = text;
	r = 'V';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton19()
{
	value = text;
	r = 'x^2';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton18()
{
	value = text;
	r = '1/x';
	UpdateData(false);
}
