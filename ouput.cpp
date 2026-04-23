# include <iostream>
using namespace std;

/*******************************************************
 * Este programa solicita al usuario que ingrese su nombre, edad y altura, y luego muestra un mensaje personalizado con esa información.
 * Se utiliza la función getline() para leer el nombre completo del usuario, incluyendo espacios, y se utilizan cin para leer la edad y la altura.
 * Finalmente, se muestra un mensaje de saludo que incluye los datos ingresados por el usuario.
 *******************************************************/

int main()
{
    string nombre;
    int edad;
    double altura;
    
    
    cout << "Ingrese su edad: " << endl;
    cin >> edad; // Lee un número entero

    cout << "Ingrese su nombre completo: " << endl;
    getline(cin>>ws, nombre); // Lee una línea completa de texto, incluyendo espacios
    
    cout << "Ingrese su altura en metros: " << endl;
    cin >> altura; // Lee un número de punto flotante
    cout << "Hola, " << nombre << "! Tienes " << edad << " años y mides " << altura << " metros." << endl;


    return 0;
}
