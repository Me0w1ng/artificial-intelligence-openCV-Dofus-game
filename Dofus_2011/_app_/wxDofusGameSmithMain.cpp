/***************************************************************
 * Name:      wxDofusGameSmithMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Israel Alberto RV (airvzxf@gmail.com)
 * Created:   2011-06-12
 * Copyright: Israel Alberto RV (RoviSoft.net)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "wxDofusGameSmithMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(wxDofusGameSmithFrame)
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)
/*#include "wx/colordlg.h"
#include "wx/numdlg.h"

#include "wx/image.h"
#include "wx/imaglist.h"
#include "wx/treectrl.h"
#include "wx/math.h"
*/
//struct menuTreeDatos menuTreeDatosObj;


//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}


//(*IdInit(wxDofusGameSmithFrame)
const long wxDofusGameSmithFrame::ID_TREECTRL1 = wxNewId();
const long wxDofusGameSmithFrame::ID_PANEL_BIENVENIDOS_MAIN = wxNewId();
const long wxDofusGameSmithFrame::ID_PANEL_PASO01_MAIN = wxNewId();
const long wxDofusGameSmithFrame::ID_PANEL_PASO02_MAIN = wxNewId();
const long wxDofusGameSmithFrame::ID_CapturaPantallaMain = wxNewId();
const long wxDofusGameSmithFrame::ID_PANEL1 = wxNewId();
const long wxDofusGameSmithFrame::idMenuQuit = wxNewId();
const long wxDofusGameSmithFrame::idMenuAbout = wxNewId();
const long wxDofusGameSmithFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(wxDofusGameSmithFrame,wxFrame)
    //(*EventTable(wxDofusGameSmithFrame)
    //*)
END_EVENT_TABLE()

wxDofusGameSmithFrame::wxDofusGameSmithFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(wxDofusGameSmithFrame)
    wxStaticBoxSizer* StaticBoxSizer2;
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxBoxSizer* BoxSizer2;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxStaticBoxSizer* StaticBoxSizer1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, _("Dofus Game Boot :: RoviSoft.net"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxSYSTEM_MENU|wxFULL_REPAINT_ON_RESIZE, _T("wxID_ANY"));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("resource/dofus-icon-48.png"))));
    	SetIcon(FrameIcon);
    }
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    StaticBoxSizer2 = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Menu"));
    menu_TreeCtrl = new wxTreeCtrl(Panel1, ID_TREECTRL1, wxDefaultPosition, wxSize(250,-1), wxTR_DEFAULT_STYLE, wxDefaultValidator, _T("ID_TREECTRL1"));
    menu_TreeCtrl->SetBackgroundColour(wxColour(173,224,255));
    wxFont menu_TreeCtrlFont(9,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    menu_TreeCtrl->SetFont(menu_TreeCtrlFont);
    StaticBoxSizer2->Add(menu_TreeCtrl, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, wxDLG_UNIT(Panel1,wxSize(0,0)).GetWidth());
    BoxSizer2->Add(StaticBoxSizer2, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, wxDLG_UNIT(Panel1,wxSize(0,0)).GetWidth());
    StaticBoxSizer1 = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Bienvenido"));
    BienvenidosPanelMain = new BienvenidosPanel(Panel1, ID_PANEL_BIENVENIDOS_MAIN, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL_BIENVENIDOS_MAIN"));
    StaticBoxSizer1->Add(BienvenidosPanelMain, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    Paso01PanelMain = new Paso01Panel(Panel1, ID_PANEL_PASO01_MAIN, wxDefaultPosition, wxDefaultSize, wxWANTS_CHARS, _T("ID_PANEL_PASO01_MAIN"));
    Paso01PanelMain->Hide();
    StaticBoxSizer1->Add(Paso01PanelMain, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    Paso02PanelMain = new Paso02Panel(Panel1, ID_PANEL_PASO02_MAIN, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL_PASO02_MAIN"));
    Paso02PanelMain->Hide();
    StaticBoxSizer1->Add(Paso02PanelMain, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    CapturaPantallaMain = new wxStaticBitmap(Panel1, ID_CapturaPantallaMain, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0, _T("ID_CapturaPantallaMain"));
    CapturaPantallaMain->Hide();
    StaticBoxSizer1->Add(CapturaPantallaMain, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, wxDLG_UNIT(Panel1,wxSize(0,0)).GetWidth());
    Panel1->SetSizer(BoxSizer2);
    BoxSizer2->Fit(Panel1);
    BoxSizer2->SetSizeHints(Panel1);
    BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, wxDLG_UNIT(this,wxSize(0,0)).GetWidth());
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_TREECTRL1,wxEVT_COMMAND_TREE_SEL_CHANGED,(wxObjectEventFunction)&wxDofusGameSmithFrame::Onmenu_TreeCtrlSelectionChanged);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxDofusGameSmithFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxDofusGameSmithFrame::OnAbout);
    //*)

    /* ##################
    //Maximize(true);
    //ShowFullScreen(true, wxFULLSCREEN_NOBORDER);

    wxString msj;
    // Crear Menu de Dofus en el Tree Ctr
    //dofusMenu dofusMenuObj;
    menuTreeDatosObj.TreeCtrl = menu_TreeCtrl;
    menuTreeDatosObj.iniciar();
    menuTreeDatosObj.TreeCtrl->ExpandAll();

    Layout();*/
}

void wxDofusGameSmithFrame::Onmenu_TreeCtrlSelectionChanged(wxTreeEvent& event)
{
    /* #########################
    wxTreeItemId menuID;
    menuID = menu_TreeCtrl->GetSelection();

    wxString miStr;
    wxString msj;

    //wxMessageBox( menu_TreeCtrl->GetItemText(menuID) );
    //wxMessageBox( menu_TreeCtrl->GetItemText(menuTreeDatosObj.menuItemID[2]) );

    if (
        menuID != menuTreeDatosObj.menuItemID[0] and
        menuID != menuTreeDatosObj.menuItemID[2]
    )
    {
        if (menuID == menuTreeDatosObj.menuItemID[1])
        {
            if(!BienvenidosPanelMain->IsShown()){
                BienvenidosPanelMain->Show();
            }
            if(Paso01PanelMain->IsShown()){
                Paso01PanelMain->Hide();
            }
            if(Paso02PanelMain->IsShown()){
                Paso02PanelMain->Hide();
            }
        }
        if (menuID == menuTreeDatosObj.menuItemID[3])
        {
            if(BienvenidosPanelMain->IsShown()){
                BienvenidosPanelMain->Hide();
            }
            if(!Paso01PanelMain->IsShown()){
                Paso01PanelMain->Show();
            }
            if(Paso02PanelMain->IsShown()){
                Paso02PanelMain->Hide();
            }
        }
    }
    Layout();*/
}

wxDofusGameSmithFrame::~wxDofusGameSmithFrame()
{
    //(*Destroy(wxDofusGameSmithFrame)
    //*)
}

void wxDofusGameSmithFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void wxDofusGameSmithFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}


