#include <iostream>

int main() {

    int a, b;

    std::cout << "Ingrese el valor de a: ";
    std::cin >> a;

    std::cout << "Ingrese el valor de b: ";
    std::cin >> b;

    std::cout << "\nValores iniciales:\n";
    std::cout << "a = " << a << " , b = " << b << "\n";

    // METODO A: Variable temporal
    std::cout << "\nMetodo 1: Usando variable temporal\n";

    int x = a;
    int y = b;
    int temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "Despues del intercambio:\n";
    std::cout << "a = " << x << " , b = " << y << "\n";


    // METODO B: Operaciones aritmeticas
    std::cout << "\nMetodo 2: Usando operaciones aritmeticas\n";

    x = a;
    y = b;

    x = x + y;
    y = x - y;
    x = x - y;

    std::cout << "Despues del intercambio:\n";
    std::cout << "a = " << x << " , b = " << y << "\n";


    // METODO C: Usando XOR
    std::cout << "\nMetodo 3: Usando XOR\n";

    x = a;
    y = b;

    x ^= y;
    y ^= x;
    x ^= y;

    std::cout << "Despues del intercambio:\n";
    std::cout << "a = " << x << " , b = " << y << "\n";

    return 0;
}
