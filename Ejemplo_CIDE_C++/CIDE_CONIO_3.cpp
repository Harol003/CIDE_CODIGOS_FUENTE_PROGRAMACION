// Plantilla de un Men� de Opciones

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int opcion;
    
    do {
        system("cls");        // Para limpiar la pantalla
        
        // Texto del men� que se ver� cada vez
        
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "4. Opcion 4" << endl;
        cout << "5. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                // Lista de instrucciones de la opci�n 1                
                
                system("pause>nul"); // Pausa
                break;
                
            case 2:
                // Lista de instrucciones de la opci�n 2                
                
                system("pause>nul"); // Pausa
                break;
                
            case 3:
                // Lista de instrucciones de la opci�n 3                
                
                system("pause>nul"); // Pausa            
                break;
                
            case 4:
                // Lista de instrucciones de la opci�n 4                
                
                system("pause>nul"); // Pausa                
                break;
        }        
    } while (opcion != 5);            // En vez de 5 pones el n�mero de la opci�n de SALIDA        
    return 0;
}
