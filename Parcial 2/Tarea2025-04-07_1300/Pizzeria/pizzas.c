#include <stdio.h>
#include <string.h>

int main() {
  char tipo_pizza[20];
  char ingrediente[20];
  char ingredientes_pizza[100] = "Mozzarella, tomate"; // Ingredientes base

  printf("¿Quiere una pizza vegetariana o no vegetariana? ");
  scanf("%s", tipo_pizza);

  if (strcmp(tipo_pizza, "vegetariana") == 0) {
    printf("Ingredientes vegetarianos disponibles: Pimiento, Tofu\n");
    printf("Elija un ingrediente: ");
    scanf("%s", ingrediente);

    strcat(ingredientes_pizza, ", ");
    strcat(ingredientes_pizza, ingrediente);

    printf("Pizza vegetariana con: %s\n", ingredientes_pizza);
  } else if (strcmp(tipo_pizza, "no vegetariana") == 0) {
    printf("Ingredientes no vegetarianos disponibles: Peperoni, Jamón, Salmón\n");
    printf("Elija un ingrediente: ");
    scanf("%s", ingrediente);

    strcat(ingredientes_pizza, ", ");
    strcat(ingredientes_pizza, ingrediente);

    printf("Pizza no vegetariana con: %s\n", ingredientes_pizza);
  } else {
    printf("Opción no válida.\n");
  }

  return 0;
}
