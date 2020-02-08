#include <iostream>
//suPeso
using namespace std;

class Gato{
public:
Gato(int edadInicial);
Gato(float pesoInicial);
~Gato();
int ObtenerEdad();
float ObtenerPeso();
void AsignarEdad(int edad);
void AsignarPeso(float peso);
void Maullar();
private:
int suEdad;
float suPeso;
};

Gato::Gato(int edadInicial){
suEdad = edadInicial;
cout << "Se ha creado un objeto Gato de edad " << edadInicial << endl;
}
Gato::Gato(float pesoInicial){
suPeso = pesoInicial;
cout << "Se ha creado un objeto Gato de peso " << pesoInicial << endl;
}
Gato::~Gato(){
cout << "El objeto Gato se destruira en 3, 2, 1 .... ya fue...." << endl;
}

int Gato::ObtenerEdad(){
return suEdad;
}

float Gato::ObtenerPeso(){
return suPeso;
}

void Gato::AsignarEdad(int edad){

suEdad = edad;
}

void Gato::AsignarPeso(float peso){

suPeso = peso;
}

void Gato::Maullar(){
cout << "Miau" << endl;
}

int main(){
Gato Pelusa(5);
Pelusa.Maullar();
Pelusa.AsignarPeso(8.5);
cout << "Pelusa es un gato que tiene";
cout << Pelusa.ObtenerEdad() << "anios de edad" << endl;
cout << "Pelusa es un gato que pesa";
cout << Pelusa.ObtenerPeso() << "Kg" << endl;
Pelusa.Maullar();
Pelusa.AsignarEdad(7);
cout << "Ahora pelusa tiene " ;
cout << Pelusa.ObtenerEdad() << " anios de edad" << endl;
return 0;
}
