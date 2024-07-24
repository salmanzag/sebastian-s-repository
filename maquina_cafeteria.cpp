#include <iostream>
using namespace std;

// Definir la clase cafeteria, con los metodos de servir y todo
class Cafeteria {
public:
// Metodos virtuales para preparar el capuchino o el tinto
virtual void prepararCapuchino() = 0;
virtual void prepararTinto() = 0;
};

class Oster:public Cafeteria {
public:
void prepararCapuchino() override {
  cout << endl << "Preparando capuchino Oster" << endl;
}

void prepararTinto() override {
  cout << endl << "Preparando tinto Oster" << endl;
}
};

class Haceb:public Cafeteria {
public:
void prepararCapuchino() override {
  cout << endl << "Preparando capuchino Haceb" << endl;
}

void prepararTinto() override {
  cout << endl <<"Preparando tinto Haceb" << endl;
}
};

void seleccionarReceta( Cafeteria& cafetera, int opcion){
  switch(opcion){
    case 1:
      cafetera.prepararCapuchino();
    break;
    case 2:
      cafetera.prepararTinto();
    break;
    default:
    cout << "Opción invalida :,)" << endl;
  }
}

int main() {
  Oster oster;
  Haceb haceb;
  int opcion;
  int opcion2;

  do{
    cout << "\nBienvedido a la maquina de cafes :D " << endl;
    cout << "¿Qué receta desea llevar el día de hoy?" << endl;
    cout << "1. Capuchino" << endl;
    cout << "2. Tinto" << endl;
    cout << "0. salir" << endl << endl;

    cout << "Ingrese una opción: ";
    cin >> opcion;
    cout << endl;

    if (opcion == 0) break;

        cout << "¿De que empresa quiere su capuchino?" << endl;
        cout << "1. Oster" << endl;
        cout << "2. Haceb" << endl;
        cout << "0. salir" << endl << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion2;
    cout << endl;

    if (opcion2 == 0) break;

        switch (opcion2){
          case 1:
            seleccionarReceta(oster, opcion);
          break;
          case 2:
            seleccionarReceta(haceb, opcion);
          break;
          default:
          cout << "Opción invalida :,)" << endl;
        }
    
  cout << endl << "¡¡¡Gracias por su pedido, que tengas un exelente día!!! :D" << endl;
  } while (opcion != 0);
}