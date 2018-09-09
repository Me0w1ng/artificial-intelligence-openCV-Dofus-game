#include "wx_pch.h"
#include "Paso02Panel.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(Paso02Panel)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(Paso02Panel)
//*)

//(*IdInit(Paso02Panel)
const long Paso02Panel::ID_STATICTEXT1 = wxNewId();
const long Paso02Panel::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Paso02Panel,wxPanel)
	//(*EventTable(Paso02Panel)
	//*)
END_EVENT_TABLE()

Paso02Panel::Paso02Panel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name)
{
	//(*Initialize(Paso02Panel)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

Paso02Panel::~Paso02Panel()
{
	//(*Destroy(Paso02Panel)
	//*)
}

