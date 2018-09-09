#ifndef DOFUSMENU_H
#define DOFUSMENU_H


#include <wx/imaglist.h>
#include <wx/treectrl.h>


#define NUM_ICONOS 13
#define NUM_MENU_ITEM 4

struct menuTreeDatos
{

    const char *path;
    int size;

    char icoNombre[255][NUM_ICONOS][500];
    char icoDatos[255][NUM_ICONOS][500];

    wxTreeCtrl *TreeCtrl;
    wxTreeItemId menuItemID[100];

    menuTreeDatos() {
        size = 24;
        path = "resource/ico/";
    }


    void iniciar()
    {
        //#################################
        strcpy(icoNombre[0][0], "star_48");
        strcpy(icoNombre[1][0], "star_half_48");
        strcpy(icoNombre[2][0], "star_off_48");
        strcpy(icoNombre[3][0], "coffee_48");
        strcpy(icoNombre[4][0], "user_48");
        strcpy(icoNombre[5][0], "speech_bubble_48");
        strcpy(icoNombre[6][0], "accepted_48");
        strcpy(icoNombre[7][0], "cancel_48");
        strcpy(icoNombre[8][0], "circle_blue");
        strcpy(icoNombre[9][0], "circle_green");
        strcpy(icoNombre[10][0], "circle_orange");
        strcpy(icoNombre[11][0], "circle_red");
        strcpy(icoNombre[12][0], "computer_48");

        char rutaCompleta[500] = "";
        char indiceStr[5] ="";
        const char *tipo = "ico";

        for (int i =0; i < NUM_ICONOS; i++){
            sprintf(indiceStr, "%d", i);

            strcpy( rutaCompleta, "" );
            strcpy( rutaCompleta, path );
            strcat( rutaCompleta, *icoNombre[i] );
            strcat( rutaCompleta, "." );
            strcat( rutaCompleta, tipo );

            strcpy(icoDatos[i][0], *icoNombre[i]);
            strcpy(icoDatos[i][1], tipo);
            strcpy(icoDatos[i][2], rutaCompleta);
            strcpy(icoDatos[i][3], indiceStr);
        }
        //#######################################


        wxString textoStr;
        wxIcon icono[NUM_ICONOS];

        wxImageList *imagenesList = new wxImageList(size, size, true);

        for ( int i = 0; i < NUM_ICONOS; i++ )
        {
            textoStr.Printf( _T("%S"), icoDatos[i][2] );
            icono[i].LoadFile(textoStr, wxBITMAP_TYPE_ICO);
            imagenesList->Add(wxBitmap(wxBitmap(icono[i]).ConvertToImage().Rescale(size, size)));
        }

        TreeCtrl->SetImageList(imagenesList);

        // ##################################################
        menuItemID[0] = TreeCtrl->AddRoot(_("Dofus Game BOT"));

        menuItemID[1] = TreeCtrl->AppendItem(menuItemID[0], _("Bienvenidos"));

        menuItemID[2] = TreeCtrl->AppendItem(menuItemID[0], _("Pasos"));
        menuItemID[3] = TreeCtrl->AppendItem(menuItemID[2], _("Seleccionar Ventana"));
        //wxTreeItemId idMedidasVentana2 = TreeCtrl->AppendItem(idPasos, _("02"));
        //wxTreeItemId idMedidasVentana3 = TreeCtrl->AppendItem(idPasos, _("03"));
        //wxTreeItemId idMedidasVentana4 = TreeCtrl->AppendItem(idPasos, _("05"));
        //wxTreeItemId idMedidasVentana5 = TreeCtrl->AppendItem(idPasos, _("06"));
        //wxTreeItemId idMedidasVentana6 = TreeCtrl->AppendItem(idPasos, _("07"));
        // ##################################################

        TreeCtrl->SetItemImage(menuItemID[1], 3, wxTreeItemIcon_Normal);
        TreeCtrl->SetItemImage(menuItemID[2], 2, wxTreeItemIcon_Normal);
        TreeCtrl->SetItemImage(menuItemID[3], 2, wxTreeItemIcon_Normal);
    }
};





class dofusMenu
{
    public:
        dofusMenu();
        virtual ~dofusMenu();

    protected:

    private:

};

#endif // DOFUSMENU_H
