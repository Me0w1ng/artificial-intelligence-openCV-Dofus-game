#ifndef PASO02PANEL_H
#define PASO02PANEL_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Paso02Panel)
	#include <wx/sizer.h>
	#include <wx/stattext.h>
	#include <wx/panel.h>
	#include <wx/button.h>
	//*)
#endif
//(*Headers(Paso02Panel)
//*)

class Paso02Panel: public wxPanel
{
	public:

		Paso02Panel(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize,long style = wxTAB_TRAVERSAL, const wxString& name=_T("id"));
		virtual ~Paso02Panel();

		//(*Declarations(Paso02Panel)
		wxButton* Button1;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(Paso02Panel)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(Paso02Panel)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
