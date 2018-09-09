#include <QApplication>
#include <QPixmap>
#include <QWidget>
#include <QtGui>

#include <cstdio>


int main(int argc, char *argv[])
{
    const char *textStr;
    char c;
    int i = 0;
    int x =0, y =0, ancho =0, alto =0, calidad =0;



    while (argv[4][i]){
        c = argv[4][i];
        argv[4][i] = (tolower(c));
        i++;
    }
    textStr = argv[4];

    if( strcmp(textStr, "si") == 0 ){
        if(argc == 5) {
       printf("Usar: \ncapturaPantallaQt  <ruta/fichero_destino>[texto]  \n\t<extencion_archivo>[texto]  \n\t<calidad[0-100]>[numero] \n\t<pantalla_competa[si/no]>[texto]  \n\t\t<x>[numero]  \n\t\t<y>[numero]  \n\t\t<ancho>[numero]  \n\t\t<alto>[numero]\n");
       printf("Ejemplo: \ncapturaPantallaQt capturarPantallaQtRelease ./screenShot.png png 50 no 100 200 800 400\n");
       return 1;
        }
    }else{
        if(argc == 9) {
            x = atoi(argv[5]);
            y = atoi(argv[6]);
            ancho = atoi(argv[7]);
            alto = atoi(argv[8]);
        }else{
            printf("Faltan Argumentos: \ncapturaPantallaQt  <ruta/fichero_destino>[texto]  \n\t<extencion_archivo>[texto]  \n\t<calidad[0-100]>[numero] \n\t<pantalla_competa[si/no]>[texto]  \n\t\t<x>[numero]  \n\t\t<y>[numero]  \n\t\t<ancho>[numero]  \n\t\t<alto>[numero]\n");
            printf("Ejemplo: \ncapturaPantallaQt capturarPantallaQtRelease ./screenShot.png png 50 no 100 200 800 400\n");
           return 1;
        }
    }
    printf("No Argumentos: %d\n", argc);
    printf("Pantalla Completa: %s\n", textStr);


    QApplication app(argc, argv);
    const char *textoStr;
    bool siGrabo;


    QPixmap originalPixmap;
    originalPixmap = QPixmap();

    QString format = argv[2];
    QString fileName = argv[1];
    textoStr = fileName.toAscii();
    calidad = atoi(argv[3]);

    if ( strcmp(textStr, "si") == 0 ){
        originalPixmap = QPixmap::grabWindow(QApplication::desktop()->screen()->winId());
    }else{
        originalPixmap = QPixmap::grabWindow(QApplication::desktop()->screen()->winId(), x, y, ancho, alto);
    }
    siGrabo = originalPixmap.save( fileName, format.toAscii(), calidad );


    if (siGrabo){
        printf("### Si Grabo el Archivo.\n");
    }else{
        printf("### No Grabo el Archivo.\n");
    }

    printf("*** Finalizo el programa con Exito ***\n\n");
    return 0;
    //return app.exec();
}
