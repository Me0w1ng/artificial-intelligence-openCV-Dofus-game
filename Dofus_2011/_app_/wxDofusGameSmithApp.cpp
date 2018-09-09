/***************************************************************
 * Name:      wxDofusGameSmithApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Israel Alberto RV (airvzxf@gmail.com)
 * Created:   2011-06-12
 * Copyright: Israel Alberto RV (RoviSoft.net)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "wxDofusGameSmithApp.h"

//(*AppHeaders
#include "wxDofusGameSmithMain.h"
#include <wx/image.h>
//*)

SIMPLEMENT_APP(wxDofusGameSmithApp);

bool wxDofusGameSmithApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wxDofusGameSmithFrame* Frame = new wxDofusGameSmithFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
