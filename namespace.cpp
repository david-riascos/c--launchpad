#include <iostream>
#include <stdexcept>
#include <limits> // Necesario para limpiar el buffer de entrada

namespace Matematicas {
    // Cambiamos a double para que las operaciones financieras sean precisas
    double sumar(double a, double b) { return a + b; }
    double restar(double a, double b) { return a - b; }
    double multiplicar(double a, double b) { return a * b; }

    double dividir(double a, double b) {
        if (b == 0) {
            throw std::invalid_argument("¡Error! División por cero.");
        }
        return a / b;
    }
}

namespace Contabilidad {
    double calcularTotalConIVA(double precio) {
        const double IVA = 0.19; // IVA del 19%
        double montoIVA = Matematicas::multiplicar(precio, IVA);
        return Matematicas::sumar(precio, montoIVA);
    }
}

int main() {
    double num1, num2, precio;

    // --- ENTRADA PARA OPERACIONES MATEMÁTICAS ---
    std::cout << "=== CALCULADORA INTERACTIVA ===" << std::endl;
    std::cout << "Introduce el primer numero: ";
    /*
        Esta es la instrucción que "detiene" el programa y espera a que 
        el usuario escriba algo y presione Enter. La flecha >> indica que 
        los datos fluyen desde la consola hacia tu variable.
    */
    std::cin >> num1; // Escanea la entrada del usuario
    
    std::cout << "Introduce el segundo numero: ";
    std::cin >> num2;

    std::cout << "\nResultados Matematicos:" << std::endl;
    std::cout << "-> Suma: " << Matematicas::sumar(num1, num2) << std::endl;
    std::cout << "-> Resta: " << Matematicas::restar(num1, num2) << std::endl;
    
    // Manejo de la excepción de división
    try {
        std::cout << "-> Division: " << Matematicas::dividir(num1, num2) << std::endl;
    } catch (const std::invalid_argument& e) {
        // Se usa igual que cout, pero está destinado específicamente 
        // para mostrar mensajes de error. Esto ayuda a diferenciar entre salida normal y mensajes de error.
        std::cerr << "-> Division: " << e.what() << std::endl;
    }

    // --- ENTRADA PARA CONTABILIDAD ---
    std::cout << "\n=== MODULO DE CONTABILIDAD ===" << std::endl;
    std::cout << "Introduce el precio del producto: ";
    std::cin >> precio;

    std::cout << "Total a pagar (IVA 21%): $" 
              << Contabilidad::calcularTotalConIVA(precio) << std::endl;

    return 0;
}