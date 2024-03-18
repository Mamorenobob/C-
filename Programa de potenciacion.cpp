#include <iostream>

// Función para calcular la potencia de un número
double calcularPotencia(double base, int exponente) {
    double resultado = 1.0;

    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    // Ingresar la base y el exponente desde la entrada estándar
    double base;
    int exponente;

    std::cout << "Ingrese la base: ";
    std::cin >> base;

    std::cout << "Ingrese el exponente: ";
    std::cin >> exponente;

    // Calcular y mostrar el resultado
    double resultado = calcularPotencia(base, exponente);

    std::cout << "El resultado de " << base << " elevado a la " << exponente << " es: " << resultado << std::endl;

    return 0;
}

