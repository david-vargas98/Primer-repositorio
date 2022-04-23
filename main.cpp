#include <iostream>
using namespace std;
int main()
{
    string nombre;
    size_t edad;

    cout << "Hola mundo" << endl;
    cout << "Nombre: ";
    getline(cin, nombre);
    cout << "Hola " << nombre << "!" << endl;
    cout << "Ingresa tu edad:";
    cin >> edad;
    cout << "La edad de " << nombre << " es " << edad << " anios" << endl;

    return 0;
}