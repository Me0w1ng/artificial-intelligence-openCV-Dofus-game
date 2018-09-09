#ifndef PASO01PANEL_H
#define PASO01PANEL_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(Paso01Panel)
	#include <wx/sizer.h>
	#include <wx/stattext.h>
	#include <wx/panel.h>
	#include <wx/statbmp.h>
	#include <wx/button.h>
	#include <wx/timer.h>
	//*)
#endif
//(*Headers(Paso01Panel)
//*)

class Paso01Panel: public wxPanel
{
	public:

		Paso01Panel(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize,long style = wxTAB_TRAVERSAL, const wxString& name=_T("id"));
		virtual ~Paso01Panel();

		//(*Declarations(Paso01Panel)
		wxStaticText* StaticText9;
		wxStaticBitmap* StaticBitmap2;
		wxPanel* Panel5;
		wxTimer TimerCapturarPantalla;
		wxButton* Button4;
		wxStaticBitmap* StaticBitmap5;
		wxStaticText* StaticText2;
		wxPanel* Panel4;
		wxButton* Button1;
		wxStaticText* StaticText6;
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* cronometro;
		wxStaticText* StaticText8;
		wxStaticBitmap* StaticBitmap4;
		wxPanel* Panel8;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxButton* Button2;
		wxPanel* Panel6;
		wxPanel* Panel3;
		wxButton* Button6;
		wxButton* Button11;
		wxButton* Button5;
		wxButton* Button3;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxButton* Button7;
		wxPanel* Panel7;
		wxPanel* Panel2;
		wxStaticBitmap* CapturaPanelBitmap;
		wxStaticText* StaticText4;
		wxStaticBitmap* StaticBitmap3;
		//*)

	protected:

		//(*Identifiers(Paso01Panel)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON6;
		static const long ID_BUTTON11;
		static const long ID_BUTTON7;
		static const long ID_STATICTEXT9;
		static const long ID_STATICTEXT3;
		static const long ID_STATICBITMAP1;
		static const long ID_PANEL1;
		static const long ID_STATICTEXT4;
		static const long ID_STATICBITMAP2;
		static const long ID_PANEL2;
		static const long ID_STATICTEXT5;
		static const long ID_STATICBITMAP3;
		static const long ID_PANEL3;
		static const long ID_STATICTEXT6;
		static const long ID_STATICBITMAP4;
		static const long ID_PANEL4;
		static const long ID_STATICTEXT7;
		static const long ID_STATICBITMAP5;
		static const long ID_PANEL5;
		static const long ID_STATICTEXT8;
		static const long ID_PANEL6;
		static const long ID_STATICTEXT10;
		static const long ID_CapturaPanelBitmap;
		static const long ID_PANEL7;
		static const long ID_PANEL8;
		static const long ID_TIMER1;
		//*)

	private:

		//(*Handlers(Paso01Panel)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		void OnButton5Click(wxCommandEvent& event);
		void OnButton6Click(wxCommandEvent& event);
		void OnButton7Click(wxCommandEvent& event);
		void OnButton8Click(wxCommandEvent& event);
		void OnButton11Click(wxCommandEvent& event);
		void OnTimer1Trigger(wxTimerEvent& event);
		void OnButton7Click1(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
