#ifndef BIENVENIDOSPANEL_H
#define BIENVENIDOSPANEL_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(BienvenidosPanel)
	#include <wx/sizer.h>
	#include <wx/stattext.h>
	#include <wx/panel.h>
	#include <wx/statbmp.h>
	//*)
#endif
//(*Headers(BienvenidosPanel)
//*)

class BienvenidosPanel: public wxPanel
{
	public:

		BienvenidosPanel(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize,long style = wxTAB_TRAVERSAL, const wxString& name=_T("id"));
		virtual ~BienvenidosPanel();

		//(*Declarations(BienvenidosPanel)
		wxStaticText* StaticText2;
		wxStaticBitmap* StaticBitmap1;
		//*)

	protected:

		//(*Identifiers(BienvenidosPanel)
		static const long ID_STATICTEXT2;
		static const long ID_STATICBITMAP1;
		//*)

	private:

		//(*Handlers(BienvenidosPanel)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
