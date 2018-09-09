#include "wx_pch.h"
#include "BienvenidosPanel.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(BienvenidosPanel)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(BienvenidosPanel)
#include <wx/bitmap.h>
#include <wx/image.h>
//*)

//(*IdInit(BienvenidosPanel)
const long BienvenidosPanel::ID_STATICTEXT2 = wxNewId();
const long BienvenidosPanel::ID_STATICBITMAP1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(BienvenidosPanel,wxPanel)
	//(*EventTable(BienvenidosPanel)
	//*)
END_EVENT_TABLE()

BienvenidosPanel::BienvenidosPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name)
{
	//(*Initialize(BienvenidosPanel)
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer1;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Dofus Game BOT\nBy\nAirv_Zxf\nRoviSoft.net"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT2"));
	BoxSizer2->Add(StaticText2, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, wxDLG_UNIT(this,wxSize(5,0)).GetWidth());
	BoxSizer2->Add(10,68,0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("resource/logo.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	BoxSizer2->Add(StaticBitmap1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, wxDLG_UNIT(this,wxSize(0,0)).GetWidth());
	BoxSizer1->Add(BoxSizer2, 0, wxALL|wxEXPAND|wxFIXED_MINSIZE|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, wxDLG_UNIT(this,wxSize(0,0)).GetWidth());
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

BienvenidosPanel::~BienvenidosPanel()
{
	//(*Destroy(BienvenidosPanel)
	//*)
}

