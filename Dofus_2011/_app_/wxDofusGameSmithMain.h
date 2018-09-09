/***************************************************************
 * Name:      wxDofusGameSmithMain.h
 * Purpose:   Defines Application Frame
 * Author:    Israel Alberto RV (airvzxf@gmail.com)
 * Created:   2011-06-12
 * Copyright: Israel Alberto RV (RoviSoft.net)
 * License:
 **************************************************************/

#ifndef WXDOFUSGAMESMITHMAIN_H
#define WXDOFUSGAMESMITHMAIN_H

//(*Headers(wxDofusGameSmithFrame)
#include <wx/treectrl.h>
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

#include "wx_Src/dofusMenu.h"

#include "BienvenidosPanel.h"
#include "Paso01Panel.h"
#include "Paso02Panel.h"

class wxDofusGameSmithFrame: public wxFrame
{
    public:

        wxDofusGameSmithFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~wxDofusGameSmithFrame();
        struct menuTreeDatos menuTreeDatosObj;

    private:

        //(*Handlers(wxDofusGameSmithFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnHighLight(wxTreeEvent& event);
        void Onmenu_TreeCtrlSelectionChanged(wxTreeEvent& event);
        //*)

        //(*Identifiers(wxDofusGameSmithFrame)
        static const long ID_TREECTRL1;
        static const long ID_PANEL_BIENVENIDOS_MAIN;
        static const long ID_PANEL_PASO01_MAIN;
        static const long ID_PANEL_PASO02_MAIN;
        static const long ID_CapturaPantallaMain;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(wxDofusGameSmithFrame)
        Paso02Panel* Paso02PanelMain;
        BienvenidosPanel* BienvenidosPanelMain;
        wxPanel* Panel1;
        wxStaticBitmap* CapturaPantallaMain;
        wxStatusBar* StatusBar1;
        Paso01Panel* Paso01PanelMain;
        wxTreeCtrl* menu_TreeCtrl;
        //*)


        DECLARE_EVENT_TABLE()
};

#endif // WXDOFUSGAMESMITHMAIN_H
