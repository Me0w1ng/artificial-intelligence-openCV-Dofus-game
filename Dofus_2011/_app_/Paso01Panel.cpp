#include "wx_pch.h"
#include "Paso01Panel.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Paso01Panel)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(Paso01Panel)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
//*)

/* #########
wxString msjStr;
int iTiempo = 4;
*/

//(*IdInit(Paso01Panel)
const long Paso01Panel::ID_STATICTEXT1 = wxNewId();
const long Paso01Panel::ID_STATICTEXT2 = wxNewId();
const long Paso01Panel::ID_BUTTON1 = wxNewId();
const long Paso01Panel::ID_BUTTON2 = wxNewId();
const long Paso01Panel::ID_BUTTON3 = wxNewId();
const long Paso01Panel::ID_BUTTON4 = wxNewId();
const long Paso01Panel::ID_BUTTON5 = wxNewId();
const long Paso01Panel::ID_BUTTON6 = wxNewId();
const long Paso01Panel::ID_BUTTON11 = wxNewId();
const long Paso01Panel::ID_BUTTON7 = wxNewId();
const long Paso01Panel::ID_STATICTEXT9 = wxNewId();
const long Paso01Panel::ID_STATICTEXT3 = wxNewId();
const long Paso01Panel::ID_STATICBITMAP1 = wxNewId();
const long Paso01Panel::ID_PANEL1 = wxNewId();
const long Paso01Panel::ID_STATICTEXT4 = wxNewId();
const long Paso01Panel::ID_STATICBITMAP2 = wxNewId();
const long Paso01Panel::ID_PANEL2 = wxNewId();
const long Paso01Panel::ID_STATICTEXT5 = wxNewId();
const long Paso01Panel::ID_STATICBITMAP3 = wxNewId();
const long Paso01Panel::ID_PANEL3 = wxNewId();
const long Paso01Panel::ID_STATICTEXT6 = wxNewId();
const long Paso01Panel::ID_STATICBITMAP4 = wxNewId();
const long Paso01Panel::ID_PANEL4 = wxNewId();
const long Paso01Panel::ID_STATICTEXT7 = wxNewId();
const long Paso01Panel::ID_STATICBITMAP5 = wxNewId();
const long Paso01Panel::ID_PANEL5 = wxNewId();
const long Paso01Panel::ID_STATICTEXT8 = wxNewId();
const long Paso01Panel::ID_PANEL6 = wxNewId();
const long Paso01Panel::ID_STATICTEXT10 = wxNewId();
const long Paso01Panel::ID_CapturaPanelBitmap = wxNewId();
const long Paso01Panel::ID_PANEL7 = wxNewId();
const long Paso01Panel::ID_PANEL8 = wxNewId();
const long Paso01Panel::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Paso01Panel,wxPanel)
	//(*EventTable(Paso01Panel)
	//*)
END_EVENT_TABLE()

Paso01Panel::Paso01Panel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name)
{
	//(*Initialize(Paso01Panel)
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer11;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer9;
	wxBoxSizer* BoxSizer3;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL|wxFULL_REPAINT_ON_RESIZE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Obtener las Medidad de la Ventana del Juego"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer2->Add(StaticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer2->Add(20,25,0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Instruccciones:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer3->Add(StaticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("1"), wxDefaultPosition, wxSize(30,-1), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetBackgroundColour(wxColour(110,255,110));
	BoxSizer3->Add(Button1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("2"), wxDefaultPosition, wxSize(30,-1), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer3->Add(Button2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(this, ID_BUTTON3, _("3"), wxDefaultPosition, wxSize(30,-1), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer3->Add(Button3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button4 = new wxButton(this, ID_BUTTON4, _("4"), wxDefaultPosition, wxSize(30,-1), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	BoxSizer3->Add(Button4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button5 = new wxButton(this, ID_BUTTON5, _("5"), wxDefaultPosition, wxSize(30,-1), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	BoxSizer3->Add(Button5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button6 = new wxButton(this, ID_BUTTON6, _("6"), wxDefaultPosition, wxSize(30,-1), 0, wxDefaultValidator, _T("ID_BUTTON6"));
	BoxSizer3->Add(Button6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button11 = new wxButton(this, ID_BUTTON11, _("Capturar Pantalla"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
	Button11->SetBackgroundColour(wxColour(245,137,64));
	BoxSizer3->Add(Button11, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button7 = new wxButton(this, ID_BUTTON7, _("Ver Captura"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	Button7->SetBackgroundColour(wxColour(245,137,64));
	BoxSizer3->Add(Button7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	cronometro = new wxStaticText(this, ID_STATICTEXT9, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	cronometro->SetForegroundColour(wxColour(46,160,186));
	wxFont cronometroFont(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
	cronometro->SetFont(cronometroFont);
	BoxSizer3->Add(cronometro, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer3, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxVERTICAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Abre el Juego."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer5->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("resource/instrucciones/paso-01/01.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	BoxSizer5->Add(StaticBitmap1, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(BoxSizer5);
	BoxSizer5->Fit(Panel1);
	BoxSizer5->SetSizeHints(Panel1);
	BoxSizer4->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Panel2 = new wxPanel(this, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	Panel2->Hide();
	BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("Inicia sesion."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	BoxSizer6->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBitmap2 = new wxStaticBitmap(Panel2, ID_STATICBITMAP2, wxBitmap(wxImage(_T("/home/israel/misObras/dev/misApp/dofus/_app_/resource/instrucciones/paso-01/02.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP2"));
	BoxSizer6->Add(StaticBitmap2, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel2->SetSizer(BoxSizer6);
	BoxSizer6->Fit(Panel2);
	BoxSizer6->SetSizeHints(Panel2);
	BoxSizer4->Add(Panel2, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Panel3 = new wxPanel(this, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	Panel3->Hide();
	BoxSizer7 = new wxBoxSizer(wxVERTICAL);
	StaticText5 = new wxStaticText(Panel3, ID_STATICTEXT5, _("Inicia el Juego."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	BoxSizer7->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBitmap3 = new wxStaticBitmap(Panel3, ID_STATICBITMAP3, wxBitmap(wxImage(_T("/home/israel/misObras/dev/misApp/dofus/_app_/resource/instrucciones/paso-01/03.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP3"));
	BoxSizer7->Add(StaticBitmap3, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Panel3->SetSizer(BoxSizer7);
	BoxSizer7->Fit(Panel3);
	BoxSizer7->SetSizeHints(Panel3);
	BoxSizer4->Add(Panel3, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Panel4 = new wxPanel(this, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	Panel4->Hide();
	BoxSizer8 = new wxBoxSizer(wxVERTICAL);
	StaticText6 = new wxStaticText(Panel4, ID_STATICTEXT6, _("Maximize la ventana del Juego."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	BoxSizer8->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBitmap4 = new wxStaticBitmap(Panel4, ID_STATICBITMAP4, wxBitmap(wxImage(_T("resource/instrucciones/paso-01/04.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP4"));
	BoxSizer8->Add(StaticBitmap4, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Panel4->SetSizer(BoxSizer8);
	BoxSizer8->Fit(Panel4);
	BoxSizer8->SetSizeHints(Panel4);
	BoxSizer4->Add(Panel4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Panel5 = new wxPanel(this, ID_PANEL5, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL5"));
	Panel5->Hide();
	BoxSizer9 = new wxBoxSizer(wxVERTICAL);
	StaticText7 = new wxStaticText(Panel5, ID_STATICTEXT7, _("Ponga la ventana del juego por encima de la ventana de \"Dofus Bot\"."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	BoxSizer9->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBitmap5 = new wxStaticBitmap(Panel5, ID_STATICBITMAP5, wxBitmap(wxImage(_T("resource/instrucciones/paso-01/05.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP5"));
	BoxSizer9->Add(StaticBitmap5, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel5->SetSizer(BoxSizer9);
	BoxSizer9->Fit(Panel5);
	BoxSizer9->SetSizeHints(Panel5);
	BoxSizer4->Add(Panel5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel6 = new wxPanel(this, ID_PANEL6, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL6"));
	Panel6->Hide();
	BoxSizer10 = new wxBoxSizer(wxVERTICAL);
	StaticText8 = new wxStaticText(Panel6, ID_STATICTEXT8, _("Por ultimo:\n\n* Da clic en el Boton \"Capturar pantalla\".\n* Tendras 5 segundos para pasar a la ventana del Juego.\n* Despues regresa a la ventana \"Dofus Bot\".\n* Felicidades has completado este primer paso."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	BoxSizer10->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel6->SetSizer(BoxSizer10);
	BoxSizer10->Fit(Panel6);
	BoxSizer10->SetSizeHints(Panel6);
	BoxSizer4->Add(Panel6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel7 = new wxPanel(this, ID_PANEL7, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL7"));
	Panel7->Hide();
	BoxSizer11 = new wxBoxSizer(wxVERTICAL);
	StaticText9 = new wxStaticText(Panel7, ID_STATICTEXT10, _("Listo!\nEsta es la captura de tu pantalla."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	BoxSizer11->Add(StaticText9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CapturaPanelBitmap = new wxStaticBitmap(Panel7, ID_CapturaPanelBitmap, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0, _T("ID_CapturaPanelBitmap"));
	BoxSizer11->Add(CapturaPanelBitmap, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel7->SetSizer(BoxSizer11);
	BoxSizer11->Fit(Panel7);
	BoxSizer11->SetSizeHints(Panel7);
	BoxSizer4->Add(Panel7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel8 = new wxPanel(this, ID_PANEL8, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL8"));
	BoxSizer4->Add(Panel8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer4, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	TimerCapturarPantalla.SetOwner(this, ID_TIMER1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Paso01Panel::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Paso01Panel::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Paso01Panel::OnButton3Click);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Paso01Panel::OnButton4Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Paso01Panel::OnButton5Click);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Paso01Panel::OnButton6Click);
	Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Paso01Panel::OnButton11Click);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Paso01Panel::OnButton7Click);
	Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&Paso01Panel::OnTimer1Trigger);
	//*)
}

Paso01Panel::~Paso01Panel()
{
	//(*Destroy(Paso01Panel)
	//*)
}


void Paso01Panel::OnButton1Click(wxCommandEvent& event)
{
    /* ###################
    Button1->SetBackgroundColour(wxColour(110,255,110));
    if(!Panel1->IsShown()){
        Panel1->Show();
    }
    if(Panel2->IsShown()){
        Panel2->Hide();
    }
    if(Panel3->IsShown()){
        Panel3->Hide();
    }
    if(Panel4->IsShown()){
        Panel4->Hide();
    }
    if(Panel5->IsShown()){
        Panel5->Hide();
    }
    if(Panel6->IsShown()){
        Panel6->Hide();
    }
    if(Panel7->IsShown()){
        Panel7->Hide();
    }
    Layout();*/
}

void Paso01Panel::OnButton2Click(wxCommandEvent& event)
{
    /* ###################
    Button2->SetBackgroundColour(wxColour(110,255,110));
    if(Panel1->IsShown()){
        Panel1->Hide();
    }
    if(!Panel2->IsShown()){
        Panel2->Show();
    }
    if(Panel3->IsShown()){
        Panel3->Hide();
    }
    if(Panel4->IsShown()){
        Panel4->Hide();
    }
    if(Panel5->IsShown()){
        Panel5->Hide();
    }
    if(Panel6->IsShown()){
        Panel6->Hide();
    }
    if(Panel7->IsShown()){
        Panel7->Hide();
    }
    Layout();*/
}

void Paso01Panel::OnButton3Click(wxCommandEvent& event)
{
    /* ###################
    Button3->SetBackgroundColour(wxColour(110,255,110));
    if(Panel1->IsShown()){
        Panel1->Hide();
    }
    if(Panel2->IsShown()){
        Panel2->Hide();
    }
    if(!Panel3->IsShown()){
        Panel3->Show();
    }
    if(Panel4->IsShown()){
        Panel4->Hide();
    }
    if(Panel5->IsShown()){
        Panel5->Hide();
    }
    if(Panel6->IsShown()){
        Panel6->Hide();
    }
    if(Panel7->IsShown()){
        Panel7->Hide();
    }
    Layout();*/
}

void Paso01Panel::OnButton4Click(wxCommandEvent& event)
{
    /* ###################
    Button4->SetBackgroundColour(wxColour(110,255,110));
    if(Panel1->IsShown()){
        Panel1->Hide();
    }
    if(Panel2->IsShown()){
        Panel2->Hide();
    }
    if(Panel3->IsShown()){
        Panel3->Hide();
    }
    if(!Panel4->IsShown()){
        Panel4->Show();
    }
    if(Panel5->IsShown()){
        Panel5->Hide();
    }
    if(Panel6->IsShown()){
        Panel6->Hide();
    }
    if(Panel7->IsShown()){
        Panel7->Hide();
    }
    Layout();*/
}

void Paso01Panel::OnButton5Click(wxCommandEvent& event)
{
    /* ###################
    Button5->SetBackgroundColour(wxColour(110,255,110));
    if(Panel1->IsShown()){
        Panel1->Hide();
    }
    if(Panel2->IsShown()){
        Panel2->Hide();
    }
    if(Panel3->IsShown()){
        Panel3->Hide();
    }
    if(Panel4->IsShown()){
        Panel4->Hide();
    }
    if(!Panel5->IsShown()){
        Panel5->Show();
    }
    if(Panel6->IsShown()){
        Panel6->Hide();
    }
    if(Panel7->IsShown()){
        Panel7->Hide();
    }
    Layout();*/
}

void Paso01Panel::OnButton6Click(wxCommandEvent& event)
{
    /* ###################
    Button6->SetBackgroundColour(wxColour(110,255,110));
    if(Panel1->IsShown()){
        Panel1->Hide();
    }
    if(Panel2->IsShown()){
        Panel2->Hide();
    }
    if(Panel3->IsShown()){
        Panel3->Hide();
    }
    if(Panel4->IsShown()){
        Panel4->Hide();
    }
    if(Panel5->IsShown()){
        Panel5->Hide();
    }
    if(!Panel6->IsShown()){
        Panel6->Show();
    }
    if(Panel7->IsShown()){
        Panel7->Hide();
    }
    Layout();*/
}

void Paso01Panel::OnButton7Click(wxCommandEvent& event)
{
    /* ###################
    Button7->SetBackgroundColour(wxColour(110,255,110));
    if(Panel1->IsShown()){
        Panel1->Hide();
    }
    if(Panel2->IsShown()){
        Panel2->Hide();
    }
    if(Panel3->IsShown()){
        Panel3->Hide();
    }
    if(Panel4->IsShown()){
        Panel4->Hide();
    }
    if(Panel5->IsShown()){
        Panel5->Hide();
    }
    if(Panel6->IsShown()){
        Panel6->Hide();
    }
    if(!Panel7->IsShown()){
        Panel7->Show();
    }
    Layout();*/
}


void Paso01Panel::OnButton11Click(wxCommandEvent& event)
{
    /* ###################
    iTiempo = 4;
    TimerCapturarPantalla.Start(1000);
    msjStr.Printf( _T("5") );

    cronometro->SetLabel( msjStr );
    Button11->SetBackgroundColour(wxColour(110,255,110));

    system("exec_tools/capturarPantallaQt_R ./capturarPantallaQt ./screenShot.png png 100 si");
    Layout();*/
}


void Paso01Panel::OnTimer1Trigger(wxTimerEvent& event)
{
    /* ###################
    msjStr.Printf( _T("%d"),iTiempo );
    cronometro->SetLabel( msjStr );
    iTiempo--;
    if (iTiempo == -1)
    {
        msjStr.Printf( _T("") );
        cronometro->SetLabel( msjStr );
        TimerCapturarPantalla.Stop();
    }*/
}

