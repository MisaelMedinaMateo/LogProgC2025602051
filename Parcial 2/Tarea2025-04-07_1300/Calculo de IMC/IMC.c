#include <stdio.h>

int main() {
  float peso, estatura, imc;

  // Solicitar al usuario el peso y la estatura
  printf("Ingrese su peso en kg: ");
  scanf("%f", &peso);
  printf("Ingrese su estatura en metros: ");
  scanf("%f", &estatura);

  // Calcular el IMC
  imc = peso / (estatura * estatura);

  // Determinar la situación del peso
  if (imc <= 18.4) {
    printf("Bajo peso\n");
  } else if (imc <= 24.9) {
    printf("Normal\n");
  } else if (imc <= 29.9) {
    printf("Sobrepeso\n");
  } else if (imc <= 34.9) {
    printf("Obesidad clase 1\n");
  } else if (imc <= 39.9) {
    printf("Obesidad clase 2\n");
  } else {
    printf("Obesidad clase 3\n");
  }

  return 0;
}
