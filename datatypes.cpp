#include <iostream>
#include <iomanip> // Para formatear la salida de texto

using namespace std;

int main() {
    // --- NÚMEROS ENTEROS ---
    
    // int: El estándar para números enteros (generalmente 4 bytes)
    int edad = 25; 
    
    // short: Para números pequeños (ahorra memoria, 2 bytes)
    short temperatura = -5; 
    
    // long long: Para números gigantescos (8 bytes)
    long long poblacionMundial = 8000000000LL; 


    // --- NÚMEROS DE PUNTO FLOTANTE (DECIMALES) ---
    
    // float: Precisión simple (aprox. 7 decimales). Se usa 'f' al final.
    float precio = 19.99f; 
    
    // double: Precisión doble (aprox. 15 decimales). Es el estándar.
    double pi = 3.141592653589793;

    long double piLong = 3.14159265358979325; // Aún más precisión, pero no siempre es necesario

    // --- CARACTERES Y TEXTO ---
    
    // char: Almacena un solo carácter o símbolo usando ASCII (1 byte)
    char inicial = 'G'; 


    // --- BOOLEANOS (LÓGICA) ---
    
    // bool: Solo puede ser verdadero (true/1) o falso (false/0)
    bool esInteligente = true;

    /// --- CADENAS DE TEXTO ---
    // En C++, las cadenas de texto se pueden manejar con arrays de char o con la clase std::string (que es más fácil de usar). Aquí usaremos std::string.
    string nombre = "David"; // std::string es parte de la biblioteca estándar

    // --- CONSTANTES ---
    // Para definir valores que no cambian, usamos 'const'. Esto ayuda a evitar errores accidentales.
    const double GRAVEDAD = 9.81; // Constante para la gravedad terrestre
    const float MASA = 9.7f; // Constante para la masa de un objeto




    // --- MOSTRAR RESULTADOS POR CONSOLA ---

    cout << "--- Datos Primitivos en C++ ---" << endl;
    cout << "Entero (int): " << edad << endl;
    cout << "Entero largo (long long): " << poblacionMundial << endl;
    cout << "Flotante (float): " << precio << " (ideal para ahorrar espacio)" << endl;
    cout << "Doble (double): " << setprecision(15) << pi << " (más preciso)" << endl;
    cout << "Doble largo (long double): " << setprecision(20) << piLong << " (aún más preciso, pero no siempre necesario)" << endl;
    cout << "Caracter (char): " << inicial << endl;
    cout << "Cadena de texto (std::string): Hola! \n" << nombre << endl;
    cout << "Tu peso es: " << MASA * GRAVEDAD  << " kg" << endl;
    


    // Al imprimir un bool, C++ muestra 1 para true y 0 para false por defecto
    cout << "Booleano (bool): " << esInteligente << " (donde 1 es true)" << endl;

    return 0;
}