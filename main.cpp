#include <iostream>
using namespace std;
int main()
{
    string nombre;

    cout << "Hola mundo" << endl;
    cout << "Nombre: ";
    getline(cin, nombre);
    cout << "Hola " << nombre << "!" << endl;
    cout << "Nueva modificacion!" << endl;

    return 0;
}