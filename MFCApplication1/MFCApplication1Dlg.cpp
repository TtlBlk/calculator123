
// MFCApplication1Dlg.cpp: файл реализации
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"
#include <math.h>
#include "cmath"

#ifdef _DEBUG
#define new DEBUG_NEW
#define PI 3.14159265
#define e 2.718
#endif





CMFCApplication1Dlg::CMFCApplication1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_MFCAPPLICATION1_DIALOG, pParent)
	, text(0)
	, Switch(_T("Default"))
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
	DDX_Control(pDX, IDC_BUTTON21, First);
	DDX_Control(pDX, IDC_BUTTON22, Second);
	DDX_CBString(pDX, IDC_COMBO1, Switch);
	DDX_Control(pDX, IDC_COMBO1, switchNew);
	DDX_Control(pDX, IDC_BUTTON24, tangens);
	DDX_Control(pDX, IDC_BUTTON25, Cotangens);
	DDX_Control(pDX, IDC_BUTTON27, changer);
	DDX_Control(pDX, IDC_BUTTON28, asin);
	DDX_Control(pDX, IDC_BUTTON29, acos);
	DDX_Control(pDX, IDC_BUTTON30, kgtg);
	DDX_Control(pDX, IDC_BUTTON31, mtcm);
	DDX_Control(pDX, IDC_BUTTON32, CtF);
	DDX_Control(pDX, IDC_BUTTON33, log);
	DDX_Control(pDX, IDC_BUTTON34, expa);
	DDX_Control(pDX, IDC_BUTTON36, xVy);
	DDX_Control(pDX, IDC_BUTTON37, tenVx);
	DDX_Control(pDX, IDC_BUTTON38, xVkube);
	DDX_Control(pDX, IDC_BUTTON39, nKoren);
	DDX_Control(pDX, IDC_BUTTON40, expanenta);
	DDX_Control(pDX, IDC_BUTTON41, persent);
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
	ON_CBN_SELCHANGE(IDC_COMBO1, &CMFCApplication1Dlg::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON21, &CMFCApplication1Dlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CMFCApplication1Dlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON24, &CMFCApplication1Dlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &CMFCApplication1Dlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON27, &CMFCApplication1Dlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON29, &CMFCApplication1Dlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON28, &CMFCApplication1Dlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON30, &CMFCApplication1Dlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON31, &CMFCApplication1Dlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON32, &CMFCApplication1Dlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON33, &CMFCApplication1Dlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &CMFCApplication1Dlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON36, &CMFCApplication1Dlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &CMFCApplication1Dlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &CMFCApplication1Dlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &CMFCApplication1Dlg::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON40, &CMFCApplication1Dlg::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON41, &CMFCApplication1Dlg::OnBnClickedButton41)
END_MESSAGE_MAP()



BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	SetIcon(m_hIcon, TRUE);
	Change(1);
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
		{	
			text = value * text;
			break;
		}
		case 'V':
		{	
			text = sqrt(value);
			break;
		}
		case '1/x':
		{	
			text = 1 / value;
			break;
		}
		case 'x^2':
		{	
			text = value * value;
			break;
		}
		case '/':
		{	text = value / text;
			break;
		}
		case 'sin':
		{
			text = sin(value*PI / 180);
			break;
		}
		case 'cos':
		{
			text = cos(value*PI / 180);
			break;
		}
		case 'tan':
		{
			text = tan(value*PI / 180);
			break;
		}
		case 'ctan':
		{
			text = 1/ tan(value*PI / 180);
			break;
		}
		case '(':
		{
			text = '(';
			break;
		}
		case ')':
		{
			text = ')';
			break;
		}
		case '+/-':
		{
			text = value * -1;
			break;
		}
		case 'asin':
		{
			text = 1 / sin(value*PI / 180);
			break;
		}
		case 'acos':
		{
			text = 1 / cos(value*PI / 180);
			break;
		}
		case 'gtkg':
		{
			text = value * 0.001;
			break;
		}
		case 'cmtm':
		{
			text = value * 0.01;
			break;
		}
		case 'CtF':
		{
			text = value * 1.8 + 32;
			break;
		}
		case 'log':
		{
			text = log10(value);
			break;
		}
		case 'e^x':
		{
			text = exp(value);
			break;
		}
		case 'x^y':
		{
			text = pow(value, text);
			break;
		}
		case '10^x':
		{
			text = pow(10, text);
			break;
		}
		case 'x^3':
		{
			text = pow(value, 3);
			break;
		}
		case 'n^V':
		{
			text = pow(value, 1/text);
			break;
		}
		case 'exp':
		{
			text = value * pow(10, text);
			break;
		}
		case '%':
		{
			text = value / 100 * text;
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
void CMFCApplication1Dlg::Change(int Ch)
{
	switch (Ch)
	{
		case 0: First.ShowWindow(0);
				Second.ShowWindow(0);
				tangens.ShowWindow(0);
				Cotangens.ShowWindow(0);
				XvKvadrate.ShowWindow(0);
				Koren.ShowWindow(0);
				DelimNaX.ShowWindow(0);
				asin.ShowWindow(0);
				acos.ShowWindow(0);
				kgtg.ShowWindow(1);
				mtcm.ShowWindow(1);
				CtF.ShowWindow(1);
				changer.ShowWindow(0);
				log.ShowWindow(0);
				expa.ShowWindow(0);
				tenVx.ShowWindow(0);
				xVy.ShowWindow(0);
				xVkube.ShowWindow(0);
				nKoren.ShowWindow(0);
				expanenta.ShowWindow(0);
				persent.ShowWindow(0);
				break;
			
		case 1: First.ShowWindow(0);
				Second.ShowWindow(0);
				tangens.ShowWindow(0);
				Cotangens.ShowWindow(0);
				Koren.ShowWindow(1);
				DelimNaX.ShowWindow(1);
				XvKvadrate.ShowWindow(1);
				asin.ShowWindow(0);
				acos.ShowWindow(0);
				kgtg.ShowWindow(0);
				mtcm.ShowWindow(0);
				CtF.ShowWindow(0);
				changer.ShowWindow(1);
				log.ShowWindow(0);
				expa.ShowWindow(0);
				tenVx.ShowWindow(0);
				xVy.ShowWindow(0);
				xVkube.ShowWindow(0);
				nKoren.ShowWindow(0);
				expanenta.ShowWindow(0);
				persent.ShowWindow(1);
				break;

		case 2: First.ShowWindow(1);
				Second.ShowWindow(1);
				tangens.ShowWindow(1);
				Cotangens.ShowWindow(1);
				Koren.ShowWindow(1);
				DelimNaX.ShowWindow(1);
				XvKvadrate.ShowWindow(1);
				asin.ShowWindow(1);
				acos.ShowWindow(1);
				kgtg.ShowWindow(0);
				mtcm.ShowWindow(0);
				CtF.ShowWindow(0);
				changer.ShowWindow(1);
				log.ShowWindow(1);
				expa.ShowWindow(1);
				tenVx.ShowWindow(1);
				xVy.ShowWindow(1);
				xVkube.ShowWindow(1);
				nKoren.ShowWindow(1);
				expanenta.ShowWindow(1);
				persent.ShowWindow(0);
				break;
		
	}
}

void CMFCApplication1Dlg::OnCbnSelchangeCombo1()
{
	int n = switchNew.GetCurSel();
	switch(n)
	{
		case 0: Change(0);
				break;
		case 1: Change(1);
				break;
		case 2: Change(2);
				break;
	}
}

void CMFCApplication1Dlg::OnBnClickedButton21()
{
	value = text;
	r = 'sin';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton22()
{
	value = text;
	r = 'cos';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton24()
{
	value = text;
	r = 'tan';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton25()
{
	value = text;
	r = 'ctan';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton27()
{
	value = text;
	r = '+/-';
	m = 1;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton29()
{
	value = text;
	r = 'acos';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton28()
{
	value = text;
	r = 'asin';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton30()
{
	value = text;
	r = 'gtkg';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton31()
{
	value = text;
	r = 'cmtm';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton32()
{
	value = text;
	r = 'CtF';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton33()
{
	value = text;
	r = 'log';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton34()
{
	value = text;
	r = 'e^x';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton36()
{
	value = text;
	r = 'x^y';
	m = 1;
	text = 0;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton37()
{
	value = text;
	r = '10^x';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton38()
{
	value = text;
	r = 'x^3';
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton39()
{
	value = text;
	r = 'n^V';
	m = 1;
	text = 0;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton40()
{
	value = text;
	r = 'exp';
	m = 1;
	text = 0;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton41()
{
	value = text;
	r = '%';
	m = 1;
	text = 0;
	UpdateData(false);
}
