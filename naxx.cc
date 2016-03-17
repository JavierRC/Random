#include <iostream>
#include <vector>
#include <unistd.h>
using namespace std;



 struct PJ {
   string nom;
   string spec;
 } heroe;
 
 
int main() {
   cout << "Bienvenido a Naxxramas, para empezar introduce \"START\"" << endl;
   string auxstring;
   bool auxbool;
   int auxint, auxint2;
   cin >> auxstring;
   auxbool = false;
   while(not auxbool) {
     if(auxstring == "START") {
      vector<bool> bosses(5);
      for(int i=0; i<5; ++i) {
	bosses[i] = false;
      }
      //0:Maexxna 1:Loatheb 2:Los Cuatro Jinetes 3:Thaddius 4:Kel'Thuzad
      //INTRO
      auxbool = true;
      usleep(3000000);
      cout << "Un antiguo zigurat Nerubiano, Naxxramas fue arrancada libremente de la tierra por los agentes del Rey Exánime" << endl;
      cout << " para servir a Kel'Thuzad como base de operaciones para propagar la plaga por todo Lordaeron." << endl;
      usleep(5000000);
      cout << "Debido a la constante lucha contra Kel'Thuzad de La Cruzada Escarlata, El Alba Argenta, los Renegados y los humanos de la Alianza," << endl;
      cout << " además de las constantes incursiones de aventureros de varias razas y naciones consiguieron mantener a la plaga en las Tierras de la Peste." << endl;
      usleep(7000000);
      cout << "Pero ahora que las puertas de Naxxramas están abiertas, las nuevas fuerzas de Kel'Thuzad eliminan rápidamente toda oposición contra su base." << endl;
      cout << endl << endl;
      usleep(7000000);
      cout << "Eres un aventurero dispuesto a entrar en Naxxramas para derrotar al malvado Kel'Thuzad. Cómo te llamas?" << endl;
      cout << "Introduce tu nombre: ";
      cin >> heroe.nom;
      cout << endl;
      cout << heroe.nom << ", elige tu especialización: Fuerza, Destreza o Inteligencia. Elige bien, pues no podrá ser cambiado." << endl;
      cout << "Introduce tu especialización: ";
      cin >> heroe.spec;
      cout << "Has elegido " << heroe.spec << " como tu especialización." << endl;
      usleep(7000000);
      cout << endl << endl << endl << endl;
      //FIN INTRO
      while(not (bosses[0] and bosses[1] and bosses[2] and bosses[3])) {
	cout << "Te encuentras entre las puertas de los cuatro arrabales, hacia cuál te diriges?" << endl;
	if(not bosses[0]) cout << "1 - Arrabal Arácnido" << endl;
	if(not bosses[1]) cout << "2 - Arrabal de la Plaga" << endl;
        if(not bosses[2]) cout << "3 - Arrabal Militar" << endl;
        if(not bosses[3]) cout << "4 - Arrabal de los Ensamblajes" << endl;
	cin >> auxint;
	cout << endl;
	//ARRABAL ARÁCNIDO
	if(auxint == 1) {
	  cout << "DESCRIPCIÓN ARRABAL ARÁCNIDO. Luchas contra Maexxna o vuelves atrás?" << endl;
	  cout << "1 - Luchar contra Maexxna" << endl;
	  cout << "2 - Volver atrás" << endl;
	  cin >> auxint2;
	  cout << endl;
	  if(auxint2 == 1) {
	    bosses[0] = true;
	    cout << "LUCHA CONTRA MAEXXNA. Triunfante, vuelves al inicio." << endl << endl;
	  }
	}
	//ARRABAL DE LA PLAGA
	if(auxint == 2) {
	  cout << "DESCRIPCIÓN ARRABAL DE LA PLAGA. Luchas contra Loatheb o vuelves atrás?" << endl;
	  cout << "1 - Luchar contra Loatheb" << endl;
	  cout << "2 - Volver atrás" << endl;
	  cin >> auxint2;
	  cout << endl;
	  if(auxint2 == 1) {
	    bosses[1] = true;
	    cout << "LUCHA CONTRA LOATHEB. Triunfante, vuelves al inicio." << endl << endl;
	  }
	}
	//ARRABAL MILITAR
	if(auxint == 3) {
	  cout << "DESCRIPCIÓN ARRABAL MILITAR. Luchas contra Los Cuatro Jinetes o vuelves atrás?" << endl;
	  cout << "1 - Luchar contra Los Cuatro Jinetes" << endl;
	  cout << "2 - Volver atrás" << endl;
	  cin >> auxint2;
	  cout << endl;
	  if(auxint2 == 1) {
	    bosses[2] = true;
	    cout << "LUCHA CONTRA LOS CUATRO JINETES. Triunfante, vuelves al inicio." << endl << endl;
	  }
	}
	//ARRABAL ENSAMBLAJES
	if(auxint == 4) {
	  cout << "DESCRIPCIÓN ARRABAL DE LOS ENSAMBLAJES. Luchas contra Thaddius o vuelves atrás?" << endl;
	  cout << "1 - Luchar contra Thaddius" << endl;
	  cout << "2 - Volver atrás" << endl;
	  cin >> auxint2;
	  cout << endl;
	  if(auxint2 == 1) {
	    bosses[3] = true;
	    cout << "LUCHA CONTRA THADDIUS. Triunfante, vuelves al inicio." << endl << endl;
	  }
	}
      }
      auxbool = false;
      while(not auxbool) {
	cout << "Al derrotar al último de los generales oyes un ruido proviniente del centro del zigurat. Ante tí se abre la puerta hacia la Guarida Gélida, donde se encuentra " << endl;
	cout << "el gran nigromante Kel'Thuzad. Te atreves a desafiarlo o huirás cobardemente?" << endl;
	cout << "1 - Adentrarse en la Guarida Gélida" << endl;
	cout << "2 - Huir" << endl;
	cin >> auxint;
	cout << endl;
	if(auxint == 1) {
	  cout << "DESCRIPCION GUARIDA GÉLIDA. Te encuentras ante el gran nigromante Kel'Thuzad. Luchas contra él o vuelves atrás para pensártelo mejor?" << endl;
	  cout << "1 - Luchar contra Kel'Thuzad" << endl;
	  cout << "2 - Volver atrás" << endl;
	  cin >> auxint2;
	  cout << endl;
	  if(auxint2 == 1) {
	    auxbool = true;
	    cout << "LUCHA CONTRA KEL'THUZAD." << endl;
	    cout << "DESENLACE, CONGRATS" << endl;
	  }
	}
	else if(auxint == 2) {
	  auxbool = true;
	  cout << "Huyes como un cobarde hacia el pueblo más cercano, condenando a la humanidad. Estaras contento." << endl;
	}
      }
      cout << endl << endl << endl;
      usleep(5000000);
      cout << "FIN." << endl;
      usleep(5000000);
      cout << "Alex Rebull Caballero" << endl;
      usleep(3000000);
      cout << "Treball de Recerca" << endl;
      usleep(3000000);
      cout << "INS Argentona" << endl;
      usleep(10000000);  
      }
   }
 }