<map version="0.9.0">
<!-- To view this file, download free mind mapping software FreeMind from http://freemind.sourceforge.net -->
<node CREATED="1306976879641" ID="ID_1139142549" MODIFIED="1307402408107" TEXT="Vision Artificial">
<font NAME="SansSerif" SIZE="14"/>
<hook NAME="accessories/plugins/RevisionPlugin.properties"/>
<node CREATED="1306976879641" ID="ID_1010609042" MODIFIED="1307392409042" POSITION="right" STYLE="bubble" TEXT="OpenCV">
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
<node CREATED="1307002805296" ID="ID_1140280179" MODIFIED="1307392400905" TEXT="Video Juego">
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
<node CREATED="1307002799696" ID="ID_182121677" MODIFIED="1307392400906" TEXT="Dofus">
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
<node CREATED="1307005024064" ID="ID_1066605627" MODIFIED="1307392211391" STYLE="bubble" TEXT="Ventana del Juego">
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
<node CREATED="1307005035032" ID="ID_710306662" MODIFIED="1307392225501" TEXT="Medida de la Pantalla">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      Toma las medidas de la pantalla por ejemplo 1280x720
    </p>
  </body>
</html></richcontent>
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
</node>
<node CREATED="1307005046744" ID="ID_141489850" MODIFIED="1307395122310" TEXT="Medida Ventana del Juego">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      Ojo la medida de la ventan se tomara sin incluir el borde de la ventana.
    </p>
    <p>
      
    </p>
    <p>
      
    </p>
    <p>
      En caso:
    </p>
    <ul>
      <li>
        Pantalla completa: Obtener la resolucion del Display para calcular las coordenadas (x,y)
      </li>
    </ul>
    <ul>
      <li>
        Ventana: Si tenemos una ventana habria que sumar la coordenada (x,y) mas la coordenada x del Display y la coordenada y del Display
      </li>
    </ul>
    <p>
      <br />
      
    </p>
    <p>
      Linux :: Monitor 1028x720:
    </p>
    <p>
      Ventana de Dofus: 720x576
    </p>
    <p>
      Nota: Sin contar el borde de la ventana.
    </p>
    <p>
      
    </p>
    <p>
      Windows 7 :
    </p>
  </body>
</html></richcontent>
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
</node>
</node>
<node CREATED="1307002775442" ID="ID_1995486691" MODIFIED="1307392400906" TEXT="Reconocimiento de Arboles">
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
<icon BUILTIN="messagebox_warning"/>
<node CREATED="1307393012504" ID="ID_867606307" MODIFIED="1307393016327" TEXT="Tipos de Arboles">
<node CREATED="1307002790377" ID="ID_439358526" MODIFIED="1307392400906" TEXT="Fresno">
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
<node COLOR="#338800" CREATED="1307392460279" ID="ID_865505123" MODIFIED="1307395623000" TEXT="Reconocer Arbol completo">
<icon BUILTIN="button_ok"/>
</node>
<node CREATED="1307392041704" ID="ID_1334887288" MODIFIED="1307395550889" TEXT="Reconozca arbol talado">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      Si el arbol esta talado ignore el objeto y no lo tome en cuenta.
    </p>
  </body>
</html></richcontent>
</node>
<node CREATED="1307004835080" ID="ID_302909510" MODIFIED="1307396221829" TEXT="Reconocer Hacha">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      Mueva el mouse por el Rectangulo de la imagen y vea cuando aparezca el acha, de ser asi dara clic.
    </p>
    <p>
      Posteriormente cuando se tenga la BD se guardaran al azahar 20 posisiones.
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
<node CREATED="1307393098734" ID="ID_1723420216" MODIFIED="1307402368552" TEXT="Guardar posisiones donde aparecio el hacha, para talar.">
<node CREATED="1307393153397" ID="ID_1456813587" MODIFIED="1307393156359" TEXT="Guardar en BD"/>
</node>
</node>
<node COLOR="#000000" CREATED="1307392858149" ID="ID_61118783" MODIFIED="1307395399390" TEXT="Reconozca si se puede Talar">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      Si la letra esta Talar esta en negrita y el fondo naranja. Si se puede talar.
    </p>
    <p>
      Si la letra esta Talar esta en gris y el fondo no cambia. No se puede talar.
    </p>
    <p>
      Que se salte a otro arbol si no lo puede tlar.
    </p>
  </body>
</html></richcontent>
</node>
<node CREATED="1307391577840" ID="ID_1210952693" MODIFIED="1307392400907" TEXT="Reconozca el arbol en partes">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      El arbol es reconocido por la imagen que encierra en el cuadrado.
    </p>
    <p>
      Que haga una matriz donde reconozca en que lugares de ese cuadro puede dar clic osea que reconozca el haca.
    </p>
    <p>
      
    </p>
    <p>
      Ejemplo: Reconozca el Tronco, las Ramas, la parte media baja del tronco, y los laterales del tronco.
    </p>
  </body>
</html></richcontent>
</node>
<node CREATED="1307391430473" ID="ID_361169913" MODIFIED="1307402709441" TEXT="Guardar posision de arboles">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      Para esto se necesita una lista jerarquica.
    </p>
    <p>
      
    </p>
    <p>
      Por ejemplo:
    </p>
    <p>
      Mapa -&gt; Incamam -&gt; (2,6) -&gt; Arboles -&gt; Fresno -&gt; Area (150,100,180,280) (x,y,ancho,alto) -&gt; Interaccion {(155,120), (170,150), ...} (x,y)
    </p>
  </body>
</html>
</richcontent>
<node CREATED="1307392533379" ID="ID_1195339513" MODIFIED="1307395865367" TEXT="Guardar en BD">
<font NAME="SansSerif" SIZE="14"/>
</node>
</node>
</node>
</node>
<node CREATED="1307393018877" ID="ID_1550842737" MODIFIED="1307393026966" TEXT="Buscar Arboles en el Mapa">
<node CREATED="1307393038290" ID="ID_410996417" MODIFIED="1307393046247" TEXT="Predefinir ruta y que vaya buscano arboles"/>
</node>
</node>
<node CREATED="1307392603826" ID="ID_1468663621" MODIFIED="1307392611130" TEXT="Reonocer Mensajes">
<node CREATED="1307392612188" ID="ID_1221815913" MODIFIED="1307392617079" TEXT="Mensajes de error"/>
<node CREATED="1307392617868" ID="ID_1512547960" MODIFIED="1307392623723" TEXT="Mensajes de Pelea"/>
<node COLOR="#000000" CREATED="1307396518632" ID="ID_818970945" MODIFIED="1307396597118" TEXT="Mensajes de logros">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      Mensajes como:
    </p>
    <ul>
      <li>
        Subir nivel.
      </li>
    </ul>
  </body>
</html>
</richcontent>
</node>
<node CREATED="1307396751091" ID="ID_1890529224" MODIFIED="1307396758743" TEXT="Mensaje Iniciar sesion"/>
</node>
<node CREATED="1307392093700" ID="ID_460765032" MODIFIED="1307396478581" TEXT="Reconocer el Inicio de Sesion">
<node CREATED="1307392126920" ID="ID_1892490027" MODIFIED="1307392400908" TEXT="Capacidad para Logearse"/>
</node>
<node CREATED="1307392291035" ID="ID_1377275548" MODIFIED="1307392400908" TEXT="GeoLocalizacion">
<node CREATED="1307392302609" ID="ID_1155402936" MODIFIED="1307392400909" TEXT="Obtener el texto de la parte superior izquierda">
<node CREATED="1307392322353" ID="ID_27396956" MODIFIED="1307397973786" TEXT="Lugar / Tipo / Bando"/>
<node CREATED="1307392326208" ID="ID_1215985784" MODIFIED="1307392400909" TEXT="Coordenadas"/>
</node>
<node CREATED="1307396365956" ID="ID_864795758" MODIFIED="1307396380686" TEXT="Detecte los bordes para pasar al siguiente mapa">
<node CREATED="1307396422560" ID="ID_781739341" MODIFIED="1307397011974" TEXT="Detecte la flecha Naranja">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      Son 4 flechas:
    </p>
    <p>
      Arriba, abajo, derecha, izquierda.
    </p>
  </body>
</html></richcontent>
</node>
</node>
<node CREATED="1307394409897" ID="ID_1160482738" MODIFIED="1307402297435" TEXT="Crear Imagenes del Sector del Mapa">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      vaya guardando en un folder las imagenes de todo el mapa.
    </p>
    <p>
      Por ejemplo para Icamam guarde desde el mapa del 0,0 al 6,6 y 7,4
    </p>
  </body>
</html>
</richcontent>
<node CREATED="1307394542818" ID="ID_357593404" MODIFIED="1307394558703" TEXT="Unir las partes del mapa y Crear un solo archivo del mapa"/>
<node COLOR="#006699" CREATED="1307397860317" ID="ID_1072788545" MODIFIED="1307398485298" TEXT="Reconocer Objetos del juego">
<font NAME="SansSerif" SIZE="14"/>
<node CREATED="1307398502882" ID="ID_155742257" MODIFIED="1307398514636" TEXT="Reconocer icono Engrane"/>
<node CREATED="1307398520639" ID="ID_670010016" MODIFIED="1307398578342" TEXT="Reconocer icono Hablar">
<node CREATED="1307398486952" ID="ID_627115187" MODIFIED="1307398488174" TEXT="Reconocer personajes del juego"/>
</node>
<node CREATED="1307398609010" ID="ID_907870897" MODIFIED="1307398616242" TEXT="Reconocer icono Pesca"/>
<node CREATED="1307398617628" ID="ID_943437515" MODIFIED="1307398627608" TEXT="Reconocer icono Hacha"/>
<node CREATED="1307398565136" ID="ID_582556843" MODIFIED="1307398571553" TEXT="Reconocer vendedor">
<node CREATED="1307398571555" ID="ID_722839759" MODIFIED="1307398577179" TEXT="Aparece un cuadro arriba"/>
</node>
<node CREATED="1307398662700" ID="ID_204231264" MODIFIED="1307398725767" TEXT="Reconocer Creaturas par pelear"/>
<node CREATED="1307398804274" ID="ID_1954891373" MODIFIED="1307398809643" TEXT="Reconocer icono Cosecha"/>
<node CREATED="1307401867271" ID="ID_819886946" MODIFIED="1307401877539" TEXT="Reconocer Misiones con el signo de Admiracon verde"/>
</node>
</node>
</node>
<node CREATED="1307391243098" ID="ID_151006419" MODIFIED="1307397089441" TEXT="Verificar Inventario Lleno">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      El inventario se mide en Pods.
    </p>
    <p>
      
    </p>
    <p>
      Que el color de la barra no este en rojo y que este apunto de llenarse.
    </p>
  </body>
</html>
</richcontent>
<node CREATED="1307391262418" ID="ID_1885729871" MODIFIED="1307392400910" TEXT="Si esta lleno">
<node CREATED="1307391282506" ID="ID_1040340693" MODIFIED="1307392400910" TEXT="Ir al aserradero">
<node CREATED="1307391289437" ID="ID_289179629" MODIFIED="1307392400910" TEXT="Crear tablas con los troncos cortados"/>
</node>
</node>
</node>
</node>
</node>
<node CREATED="1307002950184" ID="ID_1504643230" MODIFIED="1307392400911" TEXT="Controlar Computadora">
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
<node CREATED="1307004875160" ID="ID_1345869272" MODIFIED="1307392400911" TEXT="Mouse">
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
<icon BUILTIN="button_ok"/>
</node>
<node CREATED="1307318054754" ID="ID_1623440530" MODIFIED="1307392400911" TEXT="Imprimir Pantalla">
<node CREATED="1307391371246" ID="ID_1076843840" MODIFIED="1307392400911" TEXT="Imprimir pantalla completa">
<icon BUILTIN="button_ok"/>
</node>
<node CREATED="1307391377174" ID="ID_1288022363" MODIFIED="1307392400912" TEXT="Imprimir seccion de pantalla"/>
</node>
<node CREATED="1307004885256" ID="ID_1709308477" MODIFIED="1307392400912" TEXT="Teclado">
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<font NAME="SansSerif" SIZE="14"/>
</node>
</node>
<node CREATED="1307007184641" ID="ID_1745480691" MODIFIED="1307392400912" TEXT="Inteligencia Cognitiva">
<node CREATED="1307007195177" ID="ID_536538194" MODIFIED="1307392400912" TEXT="Aprendizaje de la Computadora"/>
</node>
<node CREATED="1307004424456" ID="ID_707299146" MODIFIED="1307391950261" STYLE="fork" TEXT="Por hacer">
<edge COLOR="#808080" STYLE="bezier" WIDTH="thin"/>
<cloud/>
<font NAME="SansSerif" SIZE="14"/>
<node CREATED="1307391721775" ID="ID_1427043314" MODIFIED="1307393261211" TEXT="Bajar recursos (Imagenes) de Dofus">
<richcontent TYPE="NOTE"><html>
  <head>
    
  </head>
  <body>
    <p>
      Bajar imagenes png o el formato original.
    </p>
    <p>
      Para convertirlas en informacion para el reconocimiento de imagenes.
    </p>
  </body>
</html></richcontent>
<icon BUILTIN="messagebox_warning"/>
</node>
<node CREATED="1307391839432" ID="ID_1539735130" MODIFIED="1307391851721" TEXT="Hacer base de datos para guardar Informacion"/>
<node CREATED="1307391951754" ID="ID_87462056" MODIFIED="1307391979865" TEXT="Investigar sobre Inteligencia Cognitiva / Inteligencia Visual"/>
</node>
</node>
</node>
</map>
