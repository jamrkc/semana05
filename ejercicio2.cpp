#include <iostream>
#include <vector> 
#include <string>

using namespace std;

int main()
{


   spring texto;
   cout << "Ingrese el texto";

   getline(cin, texto);
   cout << texto.size();
   
   for (int i = texto.size() -1; i >= 0; i--)
   {
       cout << texto[i];
   }

    return 0;
}


