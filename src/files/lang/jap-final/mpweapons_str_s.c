#include <ultra64.h>

char *lang[] = {
	/*  0*/ "%stiene el\nC. de Datos\n",
	/*  1*/ "%stiene el\nMalet�n\n",
	/*  2*/ "%stiene el Malet�n de %s\n",
	/*  3*/ "%stiene nuestro Malet�n\n",
	/*  4*/ "Atrapaste el Malet�n\nde %s\n",
	/*  5*/ "Has capturado el\nMalet�n de %s\n",
	/*  6*/ "%sha capturado\nnuestro Malet�n\n",
	/*  7*/ "%sha capturado\nel Malet�n de %s\n",
	/*  8*/ "�Un punto por sobrevivir!\n",
	/*  9*/ "�Se supone que debes\n",
	/* 10*/ "proteger a tus amigos!\n",
	/* 11*/ "�Bien hecho!\n",
	/* 12*/ "�T� la llevas!\n",
	/* 13*/ "Obtienes 2 Puntos...\n",
	/* 14*/ "�Eres la v�ctima!\n",
	/* 15*/ "�Protege a\n%s!\n",
	/* 16*/ "�Coge a\n%s!\n",
	/* 17*/ "Descarga completada.\n",
	/* 18*/ "Conexi�n perdida.\n",
	/* 19*/ "Comenzando descarga.\n",
	/* 20*/ "Necesitas usar el Conector de Datos.\n",
	/* 21*/ "�Rey de\nla Colina!\n",
	/* 22*/ "�Tenemos\nla Colina!\n",
	/* 23*/ "�%sha capturado\nla Colina!\n",
	/* 24*/ "%ds/Punto\n",
	/* 25*/ "�1 Punto!\n",
	/* 26*/ "Sin Escudo\n",
	/* 27*/ "Autom�ticas\n",
	/* 28*/ "Lanzacohetes\n",
	/* 29*/ "Simulantes\n",
	/* 30*/ "Rey de la Colina\n",
	/* 31*/ "Complejo FarSight\n",
	/* 32*/ "Mant�n el Malet�n\n",
	/* 33*/ "Mata de Un Tiro\n",
	/* 34*/ "Captura el Malet�n\n",
	/* 35*/ "Ocultaci�n\n",
	/* 36*/ "Explosivos Templo\n",
	/* 37*/ "Asesino\n",
	/* 38*/ "Tranquilizante\n",
	/* 39*/ "C�mara Lenta\n",
	/* 40*/ "Pulsa START\n",
	/* 41*/ "Pausa\n",
	/* 42*/ "Personalizado\n",
	/* 43*/ "Aleatorio\n",
	/* 44*/ "Cinco al Azar\n",
	/* 45*/ "Mano a Mano\n",
	/* 46*/ "Minas Proxim.\n",
	/* 47*/ "Lanzacohetes\n",
	/* 48*/ "Lanzagranadas\n",
	/* 49*/ "Explosivos\n",
	/* 50*/ "Magnum Dorada\n",
	/* 51*/ "Armas Pesadas\n",
	/* 52*/ "Tranquilizantes\n",
	/* 53*/ "FarSight\n",
	/* 54*/ "Fuerza Bruta\n",
	/* 55*/ "Autom�ticas\n",
	/* 56*/ "Pistolas\n",
	/* 57*/ "Test\n",
	/* 58*/ "Test 4mb\n",
	/* 59*/ "Nada\n",
	/* 60*/ "Escudo\n",
	/* 61*/ "Desactivado\n",
	/* 62*/ "Objetivos Completados\n",
	/* 63*/ "Desconocido\n",
	/* 64*/ "Desaparecido\n",
	/* 65*/ "Controller Pak Da�ado\n",
	/* 66*/ "est� da�ado o\n",
	/* 67*/ "mal insertado.\n",
	/* 68*/ "Intentar Reparar\n",
	/* 69*/ "Reintentar\n",
	/* 70*/ "Continuar sin usar\nel Controller Pak\n",
	/* 71*/ "Controller Pak Lleno\n",
	/* 72*/ "Est� demasiado lleno. Se\nnecesitan 1 nota y 28\np�ginas para guardar.\n",
	/* 73*/ "Entra en el Men� del\nController Pak para liberar\nespacio (pulsa  START\nmientras enciendes.)\n",
	/* 74*/ "OK\n",
	/* 75*/ "----------\n",
	/* 76*/ "Pu�etazos Hurac�n\n",
	/* 77*/ "Dispositivo de Ocultaci�n\n",
	/* 78*/ "Invencible\n",
	/* 79*/ "Todas las Armas en Solo\n",
	/* 80*/ "Munici�n Ilimitada\n",
	/* 81*/ "Munici�n Ilimitada sin Recargas\n",
	/* 82*/ "Un jugador C�mara Lenta\n",
	/* 83*/ "Modo DK\n",
	/* 84*/ "Magnum de Trent\n",
	/* 85*/ "FarSight\n",
	/* 86*/ "Mini-Joanna\n",
	/* 87*/ "Mini-Personajes\n",
	/* 88*/ "Escudo de Enemigos\n",
	/* 89*/ "Escudo de Joanna\n",
	/* 90*/ "S�per Escudo\n",
	/* 91*/ "Mirilla Cl�sica\n",
	/* 92*/ "S�lo Jefes de Equipo\n",
	/* 93*/ "Jugar como Elvis\n",
	/* 94*/ "Cohetes Enemigos\n",
	/* 95*/ "Munici�n Ilimitada - Arma PC Centinela\n",
	/* 96*/ "Reglas del Marqu�s de Queensbury\n",
	/* 97*/ "Oscuridad Perfecta\n",
	/* 98*/ "Pugilista\n",
	/* 99*/ "Disparo Caliente\n",
	/*100*/ "Golpea y Corre\n",
	/*101*/ "Alien�gena\n",
	/*102*/ "Rastreador/Localizaci�n de armas\n",
	/*103*/ "Lanzacohetes\n",
	/*104*/ "Rifle Francotirador\n",
	/*105*/ "Esc�ner de Rayos-X\n",
	/*106*/ "SuperDrag�n\n",
	/*107*/ "Arma PC\n",
	/*108*/ "Phoenix\n",
	/*109*/ "Pistola Psicosis\n",
	/*110*/ "PP9i\n",
	/*111*/ "CC13\n",
	/*112*/ "Klo1313\n",
	/*113*/ "KF7 Especial\n",
	/*114*/ "ZZT (9mm)\n",
	/*115*/ "DMC\n",
	/*116*/ "AR53\n",
	/*117*/ "RC-P45\n",
	/*118*/ "Velvet Dark\n",
	/*119*/ "Diversi�n\n",
	/*120*/ "Jugabilidad\n",
	/*121*/ "Armas\n",
	/*122*/ "Compa�eros\n",
	/*123*/ "Armas para Joanna en Solo\n",
	/*124*/ "Armas Cl�sicas para Joanna en Solo\n",
	/*125*/ "Entrando en dataDyne",
	/*126*/ "Extracci�n de dataDyne",
	/*127*/ "Infiltraci�n en A51",
	/*128*/ "Rescate en A51",
	/*129*/ "Escape de A51",
	/*130*/ "Dificultad:\n",
	/*131*/ "Trucos en Misiones Solo\n",
	/*132*/ "Trucos en Simulador de Combate\n",
	/*133*/ "Trucos en Co-operativo\n",
	/*134*/ "Trucos en Contra-Operativa\n",
	/*135*/ "Sin honor\n",
	/*136*/ "Trucada\n",
	/*137*/ "Truco disponible",
	/*138*/ "Completa",
	/*139*/ "para el truco:",
	/*140*/ "en",
	/*141*/ "por debajo de",
	/*142*/ " o inserta Perfect Dark de Game Boy (r) en un Transfer Pak (tm), conecta el Transfer Pak a cualquier mando, y sal y vuelve a entrar en el men�",
	/*143*/ "Elige truco para m�s informaci�n\n",
	/*144*/ "Camarada disponible",
	/*145*/ "Gana Oros en las pruebas de tiro para activar las armas cl�sicas.\n",
	/*146*/ "Mirilla\n",
	/*147*/ "Objetivo\n",
	/*148*/ "Alcance de Zoom\n",
	/*149*/ "Mostrar Munici�n\n",
	/*150*/ "Funci�n Arma\n",
	/*151*/ "Bolas de Pintura\n",
	/*152*/ "Subt�tulos\n",
	/*153*/ "Tiempo Misi�n\n",
	/*154*/ "Modo\n",
	/*155*/ "Corte\n",
	/*156*/ "�Quieres interrumpir\nla misi�n?\n",
	/*157*/ "Joanna en Piel\n",
	/*158*/ "Joanna Negociadora\n",
	/*159*/ "Elvis (Chaleco)\n",
	/*160*/ "Error\n",
	/*161*/ "No se puede borrar un\nfichero en uso.\n",
	/*162*/ "Cancelar\n",
	/*163*/ "L�mite Tiempo:\n",
	/*164*/ "L�mite Puntos:\n",
	/*165*/ "L�mite P. Equipo:\n",
	/*166*/ "�Desaf�o Completado!\n",
	/*167*/ "�Desaf�o Fallado!\n",
	/*168*/ "�Desaf�o Trucado!\n",
	/*169*/ "Subt�tulos en Escenas\n",
	/*170*/ "Subt�tulos en el Juego\n",
	/*171*/ "Pantalla de T�tulo Alternativa\n",
	/*172*/ "Empezar Desaf�o\n",
	/*173*/ "Investigaci�n dataDyne",
	/*174*/ "Error\n",
	/*175*/ "El Controller Pak\nha sido quitado.\n",
	/*176*/ "Intentar Reparaci�n\n",
	/*177*/ "�Quieres intentar\nreparar este\nController Pak?\n",
	/*178*/ "�Puedes perder datos!\n",
	/*179*/ "Cancelar\n",
	/*180*/ "Reparar\n",
	/*181*/ "Reparado con �xito\n",
	/*182*/ "El Controller Pak ha\nsido reparado.\n",
	/*183*/ "Reparaci�n Fallada\n",
	/*184*/ "El Controller Pak \nno puede ser reparado.\nNo podr�s cargar o\nguardar en este\nController Pak.\n",
	/*185*/ "H�ndicap Jugador\n",
	/*186*/ "BOTONES L/R: ",
	/*187*/ "BOT�N C ARRIBA: ",
	/*188*/ "BOTONES C I./D.: ",
	/*189*/ "BOT�N C ABAJO: ",
	/*190*/ "BOT�N A: ",
	/*191*/ "BOT�N B: ",
	/*192*/ "STICK C.: ",
	/*193*/ "B�TON Z: ",
	/*194*/ "+ PANEL C.: ",
	/*195*/ "APUNTAR",
	/*196*/ "CAMBIAR A PUNTAR",
	/*197*/ "MIRAR ARRIBA",
	/*198*/ "MIRAR ABAJO",
	/*199*/ "MIRAR ABAJO",
	/*200*/ "MIRAR ARRIBA",
	/*201*/ "ADELANTE",
	/*202*/ "ATR�S",
	/*203*/ "DESP. LATERAL",
	/*204*/ "ARMA",
	/*205*/ "ACCI�N/RECARGA",
	/*206*/ "DISPARO",
	/*207*/ "CAMINAR/VOLVER",
	/*208*/ "MIRAR",
	/*209*/ "CAMINAR/DESP.",
	/*210*/ "MIRAR/DESP.",
	/*211*/ "COMO BOTONES C",
	/*212*/ "Mando 1:",
	/*213*/ "Mando 2:",
	/*214*/ "Estilo de Control %s %s\n",
	/*215*/ "(1 Mando)",
	/*216*/ "(2 Mandos)",
	/*217*/ "Mant�n Arma para el men� r�pido.\nMant�n Acci�n para cambiar funci�n.\nAcci�n+Disparo cambia temp. la funci�n.\nApuntar aporta una mayor precisi�n.\nApuntar + Bot�n C Abajo te agacha.\nApuntar + Bot�n C Arriba te levanta.\n",
	/*218*/ "Desactiva todos los Trucos\n",
	/*219*/ "Filtro de Lenguaje\n",
	/*220*/ "USUARIO:\n",
	/*221*/ "CLAVE:\n",
	/*222*/ "Oscuridad Perfecta\n",
	/*223*/ "Elige Opciones:\n",
	/*224*/ "Vel. de Reacci�n Enemiga:\n",
	/*225*/ "Salud del Enemigo:\n",
	/*226*/ "Da�o del Enemigo:\n",
	/*227*/ "Precisi�n del Enemigo:\n",
	/*228*/ "Aceptar\n",
	/*229*/ "Cancelar\n",
	/*230*/ "Controller Pak No Encontrado\n",
	/*231*/ "Nombre:\n",
	/*232*/ "Lugar:\n",
	/*233*/ "Nombre Duplicado\n",
	/*234*/ "ya tiene\n",
	/*235*/ "un fichero nombrado\n",
	/*236*/ "Renombrar Fichero\n",
	/*237*/ "Cambiar Lugar\n",
	/*238*/ "Cancelar\n",
	/*239*/ "Cambiar Nombre\n",
	/*240*/ "Introduce nuevo nombre:\n",
	/*241*/ "El fichero que est�s copiando\nno puede ser borrado.\n",
	/*242*/ "SimShock:%d\n",
	/*243*/ "Tiempo Requerido:\n",
	/*244*/ "�Nuevo Truco Disponible!:\n",
	/*245*/ "Continuar\n",
	/*246*/ "Volver a Jugar el Nivel\n",
	/*247*/ "Guardar Jugador\n",
	/*248*/ "�Guardar nuevo jugador\ny estad�sticas?\n",
	/*249*/ "Guardar Ahora\n",
	/*250*/ "�No, Gracias!\n",
	/*251*/ "Confirmar nombre:\n",
	/*252*/ "El fichero guardado ha\nsido borrado debido\na datos corruptos\no da�ados.\n",
	/*253*/ "Continuar\n",
	/*254*/ "Error\n",
	/*255*/ "No se puede acceder al Cartucho de GB.\nComprueba las conexiones y aseg�rate\nde que est�s usando el cartucho de\nGame Boy correcto.\n",
	/*256*/ "Cancelar\n",
	/*257*/ "Error\n",
	/*258*/ "Los datos guardados\n",
	/*259*/ "han sido borrados\n",
	/*260*/ "porque estaban da�ados.\n",
	/*261*/ "Cancelar\n",
	/*262*/ "Elige tu idioma:\n",
	/*263*/ "Ingl�s\n",
	/*264*/ "Franc�s\n",
	/*265*/ "Alem�n\n",
	/*266*/ "Italiano\n",
	/*267*/ "Espa�ol\n",
	/*268*/ "I. Americano\n",
	/*269*/ "Idioma:\n",
	/*270*/ "Idioma\n",
	/*271*/ "Estilo C.\n",
	/*272*/ "C. Opuesto\n",
	/*273*/ "M. Frente\n",
	/*274*/ "G. Cabeza\n",
	/*275*/ "Auto-Apun.\n",
	/*276*/ "C. Apuntar\n",
	/*277*/ "Mant.\n",
	/*278*/ "Camb.\n",
	/*279*/ "Subt. Escenas\n",
	/*280*/ "Subt. Juego\n",
	/*281*/ "THE N64 EXPANSION PAK ACCESSORY MUST BE INSTALLED IN THE N64 FOR\nTHIS GAME. SEE THE N64 EXPANSION PAK INSTRUCTION BOOKLET.\n",
	/*282*/ NULL,
	/*283*/ NULL,
};
