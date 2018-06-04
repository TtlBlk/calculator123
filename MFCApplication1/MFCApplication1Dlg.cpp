
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


// Диалоговое окно CMFCApplication1Dlg



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

	//DDX_Control(pDX, IDC_BUTTON10, ÷);
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
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCApplication1Dlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFCApplication1Dlg::OnBnClickedButton18)
END_MESSAGE_MAP()


// Обработчики сообщений CMFCApplication1Dlg

BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию
	//but.EnableWindow(false);
	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CMFCApplication1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CMFCApplication1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




void CMFCApplication1Dlg::OnEnChangeEdit2()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}


void CMFCApplication1Dlg::OnBnClickedButton2()
{
	//UpdateData(false);
	//but.EnableWindow(false);
	//MessageBox(text);
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
	// TODO: добавьте свой код обработчика уведомлений
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
	// TODO: добавьте свой код обработчика уведомлений
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
	// TODO: добавьте свой код обработчика уведомлений
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
	// TODO: добавьте свой код обработчика уведомлений
	value = text;
	r = '+';
	m = 1;
	text = 0;
}


void CMFCApplication1Dlg::minus()
{
	// TODO: добавьте свой код обработчика уведомлений
	value = text;
	r = '-';
	m = 1;
	text = 0;
}


void CMFCApplication1Dlg::answer()
{
	// TODO: добавьте свой код обработчика уведомлений
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
		case 5:
			text=pow(value, text);
			break;
		}
		
	}
	UpdateData(false);
	text = text;
	m = 1;
}


void CMFCApplication1Dlg::four()
{
	// TODO: добавьте свой код обработчика уведомлений
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
	// TODO: добавьте свой код обработчика уведомлений
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
	// TODO: добавьте свой код обработчика уведомлений
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
	// TODO: добавьте свой код обработчика уведомлений
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
	// TODO: добавьте свой код обработчика уведомлений
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
	// TODO: добавьте свой код обработчика уведомлений
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
	// TODO: добавьте свой код обработчика уведомлений
	text = 0;
	m = 1;
	f = 0;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton1()
{
	// TODO: добавьте свой код обработчика уведомлений
	f = 1;
}


void CMFCApplication1Dlg::OnBnClickedButton16()
{
	value = text;
	r = 5;
	text = 0;
	// TODO: добавьте свой код обработчика уведомлений
}


void CMFCApplication1Dlg::OnBnClickedButton17()
{
	value = text;
	r = 3;
	text = 0;
	// test
}
