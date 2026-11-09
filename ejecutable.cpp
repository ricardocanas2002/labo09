#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream archivo("datos.txt");

    if (!archivo.is_open())
    {
        cout << "Error: el archivo no existe o no se pudo abrir" << endl;
    }
    else
    {
        string linea;
        int contador = 0;

        while (getline(archivo, linea))
        {
            contador++;
        }

        cout << "El archivo tiene " << contador << " lineas" << endl;

        archivo.close();
    }

    return 0;
}