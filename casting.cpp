# include <iostream>
using namespace std;

/*******************************************************
 * Este programa demuestra el uso de casting en C++. El casting es una técnica que permite convertir un tipo de dato a otro.
 * En este programa se muestran ejemplos de casting entre tipos numéricos, entre tipos de punteros, y entre tipos de clases.
 * Se utilizan tanto el casting implícito como el explícito para ilustrar cómo funcionan estas conversiones en diferentes contextos.
 *******************************************************/

int main()
{
    // Casting Implícito
    int x = 10;
    double y = x; // El entero se convierte implícitamente a double
    cout << "Valor de y después del casting implícito: " << y << endl;   // 10.0

    // Casting Explícito
    double a = 3.14;
    int b = (int)a; // El double se convierte explícitamente a int, truncando la parte decimal
    cout << "Valor de b después del casting explícito: " << b << endl; // 3

    // Casting entre Punteros
    int* p = &x; // p es un puntero a int
    void* q = p; // El puntero a int se convierte implícitamente a void*
    int* r = (int*)q; // El void* se convierte explícitamente a int*
    cout << "Valor apuntado por r después del casting de punteros: " << *r << endl; // 10

    // Casting entre Clases
    class Base {
    public:
        virtual void show() { cout << "Base class" << endl; }
    };

    class Derived : public Base {
    public:
        void show() override { cout << "Derived class" << endl; }
    };

    Base* basePtr = new Derived(); // basePtr apunta a un objeto de tipo Derived

    basePtr->show(); // Llama a la función show() de Derived debido al polimorfismo

    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr); // Casting dinámico para convertir Base* a Derived*

    if (derivedPtr) {
        derivedPtr->show(); // Llama a la función show() de Derived
    } else {
        cout << "El casting dinámico falló" << endl;
    }
    
    delete basePtr; // Libera la memoria asignada para el objeto Derived
    return 0;
}

