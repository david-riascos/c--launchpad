# include <iostream>
# include <vector>

using namespace std;

typedef double Money_t; // Money es un alias para double, lo que significa que podemos usar Money en lugar de double en nuestro código.
typedef int Age_t; // Age es un alias para int, lo que significa que podemos usar Age en lugar de int en nuestro código.
typedef string Name_t; // Name es un alias para string, lo que significa que podemos usar Name en lugar de string en nuestro código.

// Pair_list es un alias para un vector de pares de string e int, lo que significa que podemos usar 
// Pair_list en lugar de std::vector<std::pair<std::string, int>> en nuestro código.
typedef std::vector<std::pair<std::string, int>> Pair_list_t; 


// using es otra forma de crear un alias para un tipo de dato existente. En este caso, impuesto es un alias para double.
using impuesto = double; 

/**
 * Los typedefs son una forma de crear un alias para un tipo de dato existente. 
 * En este caso, Money es un alias para double. Esto puede mejorar la legibilidad 
 * del código y facilitar su mantenimiento, ya que el tipo de dato subyacente 
 * puede cambiar sin afectar el código que lo utiliza.
 */
int main()
{
    Money_t price = 19.99;
    cout << "El precio es: " << price <<endl;

    Age_t age = 25;
    cout << "La edad es: " << age <<endl;

    Name_t name;
    cout << "Ingrese su nombre: ";
    cin >> name;
    cout << "El nombre es: " << name <<endl;    

    Pair_list_t pair_list;

    // Agregamos algunos pares de nombre y edad a la lista de pares.
    pair_list.push_back(make_pair("Alice", 30));
    pair_list.push_back(make_pair("Bob", 25));  
    cout << "Lista de pares:" << endl;

    // Iteramos sobre la lista de pares y mostramos el nombre y la edad de cada persona.
    for (const auto& pair : pair_list) {
        cout << "Nombre: " << pair.first << ", Edad: " << pair.second << endl;
    }

    // Usamos el alias impuesto para declarar una variable de tipo double que representa el impuesto.
    impuesto tax = 7; // 7% de impuesto
    cout << "El impuesto es: " << tax << "%" << endl;


    return 0;
}