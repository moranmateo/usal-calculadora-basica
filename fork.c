#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;

    printf("Selecciona una operación: \n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    scanf("%d", &opcion);

    printf("Ingresa dos números: ");
    scanf("%f %f", &num1, &num2);

    switch(opcion) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Error: División por cero.\n");
            }
            break;
        default:
            printf("Opción inválida.\n");
    }

    return 0;
}
