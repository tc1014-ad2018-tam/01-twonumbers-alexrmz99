/*
 * En este programa obtenemos la suma, resta, producto y división de 2 números proporcionados por el usuario,
 * números decimales son aceptados.
 * Fecha: 23 de agosto de 2018.
 * Autor: Alejandro Ramírez
 * Correo: alex.ramirez.99@hotmail.com / A01412034@itesm.mx
 */

#include <stdio.h>

int main() {
    // declaración de variables
    double num1;
    double num2;
    double sumaFinal;
    double restaFinal;
    double productoFinal;
    double divisionFinal;

    // pido al usuario los números
    printf("Este programa te ayudará a resolver operaciones simples proporcionando 2 números \n");
    printf("Dame el primer número:");
    scanf("%lf", &num1); // "%lf" permite leer variable doble
    printf("Dame el segundo número:");
    scanf("%lf", &num2);

    //aqui hago las operaciones

    sumaFinal = num1 + num2;
    printf("La suma de los dos números es: %lf\n", sumaFinal);

    restaFinal = num1 - num2;
    printf("La resta de los dos números es: %lf\n", restaFinal);

    productoFinal = num1 * num2;
    printf("El producto de los dos números es: %lf\n", productoFinal);

    divisionFinal = num1 / num2;
    printf("La división de los dos números es: %lf\n", divisionFinal);




    return 0;
}