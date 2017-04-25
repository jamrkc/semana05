#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string nombre;
    string apellido = "Perez"; 
    
    //Ingreso de string
    cout << "Ingrese su nombre:";
    //cin >> nombre;
    getline(cin, nombre);
    
    cout << nombre.size();
    
    cout << "La inicial del nombre es :" << nombre[0] << nombre << endl;
    
     cout << "Imprimir el texto :" << nombre << endl;
     
     cout << " Consonantes : ";
     for (auto i: nombre)
     {
         if (i != 'a' && ! 'e' && i != 'i' && i != 'o' && i != 'u' && 
             i != 'A' && ! 'E' && i != 'I' && i != 'O' && i != 'U')
             cout << i;
            
     }
    return 0;
}