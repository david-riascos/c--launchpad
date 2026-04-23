# include <iostream>

using namespace std;


/**
 * Este programa demuestra el uso de diversos operadores en C++. Se incluyen operadores aritméticos,
 * de asignación, de incremento y decremento, de comparación, lógicos, de bit a bit, de asignación compuestos,
 * de punteros, ternarios, de desplazamiento, de coma, de tamaño, de tipo, de memoria, unarios y binarios.
 * Cada sección del código muestra ejemplos prácticos de cómo se utilizan estos operadores en diferentes contextos.
 */

int main()
{
    // Operadores Aritméticos
    int a = 10, b = 5;
    cout << "Suma: " << a + b << endl; // 15
    cout << "Resta: " << a - b << endl; // 5
    cout << "Multiplicación: " << a * b << endl; // 50
    cout << "División: " << a / b << endl; // 2
    cout << "Módulo: " << a % b << endl; // 0

    // Operadores de Asignación
    double c = 20;
    c += 5; // c ahora es 25
    cout << "c después de += 5: " << c << endl;
    c -= 10; // c ahora es 15
    cout << "c después de -= 10: " << c << endl;
    c *= 2; // c ahora es 30
    cout << "c después de *= 2: " << c << endl;
    c /= 3; // c ahora es 10
    cout << "c después de /= 3: " << c << endl;

    // Operadores de Incremento y Decremento
    double d = 5;
    cout << "d antes del incremento: " << d << endl;
    d++; // Incremento postfijo, d ahora es 6
    cout << "d después de d++: " << d << endl;
    ++d; // Incremento prefijo, d ahora es 7
    cout << "d después de ++d: " << d << endl;
    d--; // Decremento postfijo, d ahora es 6
    cout << "d después de d--: " << d << endl;
    --d; // Decremento prefijo, d ahora es 5
    cout << "d después de --d: " << d << endl;

    // Operadores de Comparación
    int e = 10, f = 20;
    cout << "e == f: " << (e == f) << endl; // 0 (falso)
    cout << "e != f: " << (e != f) << endl; // 1 (verdadero)
    cout << "e > f: " << (e > f) << endl; // 0 (falso)
    cout << "e < f: " << (e < f) << endl; // 1 (verdadero)
    cout << "e >= f: " << (e >= f) << endl; // 0 (falso)
    cout << "e <= f: " << (e <= f) << endl; // 1 (verdadero)

    // Operadores Lógicos
    bool g = true, h = false;
    cout << "g && h: " << (g && h) << endl; // 0 (falso)
    cout << "g || h: " << (g || h) << endl; // 1 (verdadero)
    cout << "!g: " << (!g) << endl; // 0 (falso)
    cout << "!h: " << (!h) << endl; // 1 (verdadero)

    // Operadores de Bit a Bit
    int i = 5; // 0101 en binario
    int j = 3; // 0011 en binario
    cout << "i & j: " << (i & j) << endl; // 1 (0001 en binario)
    cout << "i | j: " << (i | j) << endl; // 7 (0111 en binario)
    cout << "i ^ j: " << (i ^ j) << endl; // 6 (0110 en binario)
    cout << "~i: " << (~i) << endl; // -6 (1111...1010 en binario)
    cout << "i << 1: " << (i << 1) << endl; // 10 (1010 en binario)
    cout << "i >> 1: " << (i >> 1) << endl; // 2 (0010 en binario)

    // Operadores de Asignación Compuestos
    int k = 10;
    k &= 5; // k ahora es 0 (0000 en binario)
    cout << "k después de &= 5: " << k << endl;
    k |= 3; // k ahora es 3 (0011 en binario)
    cout << "k después de |= 3: " << k << endl;
    k ^= 2; // k ahora es 1 (0001 en binario)
    cout << "k después de ^= 2: " << k << endl;
    k <<= 1; // k ahora es 2 (0010 en binario)
    cout << "k después de <<= 1: " << k << endl;
    k >>= 1; // k ahora es 1 (0001 en binario)
    cout << "k después de >>= 1: " << k << endl;

    // Operadores de Punteros
    int l = 10;
    int* ptr = &l; // ptr apunta a l
    cout << "Valor de l: " << l << endl; // 10
    cout << "Valor apuntado por ptr: " << *ptr << endl; // 10
    *ptr = 20; // Cambia el valor de l a través del puntero
    cout << "Valor de l después de cambiar a través de ptr: " << l << endl; // 20

    // Operadores de Ternario
    int m = 5;
    string resultado = (m > 0) ? "Positivo" : "No positivo";
    cout << "Resultado del operador ternario: " << resultado << endl; // Positivo       }}

    // Operadores de Desplazamiento
    int n = 8; // 1000 en binario
    cout << "n << 1: " << (n << 1) << endl; // 16 (10000 en binario)
    cout << "n >> 1: " << (n >> 1) << endl; // 4 (0100 en binario)
    
    // Operadores de Coma
    int o = (1, 2, 3); // o se asigna el valor de 3
    cout << "Valor de o después del operador de coma: " << o << endl; // 3


    // Operadores de Tamaño
    cout << "Tamaño de int: " << sizeof(int) << " bytes" << endl; // 4 bytes
    cout << "Tamaño de double: " << sizeof(double) << " bytes" << endl; // 8 bytes
    cout << "Tamaño de char: " << sizeof(char) << " bytes" << endl; // 1 byte

    // Operadores de Tipo
    cout << "Tipo de a: " << typeid(a).name() << endl; // int
    cout << "Tipo de c: " << typeid(c).name() << endl; // double
    cout << "Tipo de d: " << typeid(d).name() << endl; // double
    cout << "Tipo de g: " << typeid(g).name() << endl; // bool
    cout << "Tipo de ptr: " << typeid(ptr).name() << endl; // int*

    // Operadores de Memoria
    int* q = new int; // Asigna memoria para un entero
    *q = 42; // Asigna un valor a la memoria asignada
    cout << "Valor de q: " << *q << endl; // 42
    delete q; // Libera la memoria asignada

    // Operadores Unarios
    int r = 5;
    cout << "Valor de r: " << r << endl; // 5
    cout << "Valor de -r: " << -r << endl; // -5
    cout << "Valor de !r: " << !r << endl; // 0 (falso)
    cout << "Valor de ~r: " << ~r << endl; // -6 (1111...1010 en binario)
    r++; // Incremento postfijo, r ahora es 6
    cout << "Valor de r después de r++: " << r << endl; // 6
    ++r; // Incremento prefijo, r ahora es 7
    cout << "Valor de r después de ++r: " << r << endl; // 7

    // Operadores Binarios
    int s = 10, t = 20;
    cout << "s + t: " << (s + t) << endl; // 30
    cout << "s - t: " << (s - t) << endl; // -10
    cout << "s * t: " << (s * t) << endl; // 200
    cout << "s / t: " << (s / t) << endl; // 0
    cout << "s % t: " << (s % t) << endl; // 10
    cout << "s & t: " << (s & t) << endl; // 0 (0000 en binario)
    cout << "s | t: " << (s | t) << endl; // 30 (11110 en binario)
    cout << "s ^ t: " << (s ^ t) << endl; // 30 (11110 en binario)
    cout << "s << 1: " << (s << 1) << endl; // 20 (10100 en binario)
    cout << "s >> 1: " << (s >> 1) << endl; // 5 (0101 en binario)
    cout << "s && t: " << (s && t) << endl; // 1 (verdadero)
    cout << "s || t: " << (s || t) << endl; // 1 (verdadero)
    cout << "s == t: " << (s == t) << endl; // 0 (falso)
    cout << "s != t: " << (s != t) << endl; // 1 (verdadero)
    cout << "s > t: " << (s > t) << endl; // 0 (falso)
    cout << "s < t: " << (s < t) << endl; // 1 (verdadero)
    cout << "s >= t: " << (s >= t) << endl; // 0 (falso)
    cout << "s <= t: " << (s <= t) << endl; // 1 (verdadero)

    return 0;
}