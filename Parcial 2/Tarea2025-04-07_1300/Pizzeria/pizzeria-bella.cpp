#include <stdio.h>

int main() {
    char opcion[10];
    int esVegetariana = 0;
    char ingredienteElegido[20];
    char listaIngredientes[100];
    
    printf("Bienvenido a la Pizzería Bella Napoli\n");
    printf("¿Desea una pizza vegetariana? (si/no): ");
    scanf("%s", opcion);
    
    // Comprobación manual sin funciones de string
    if ((opcion[0] == 's' || opcion[0] == 'S') && 
        (opcion[1] == 'i' || opcion[1] == 'I')) {
        esVegetariana = 1;
        printf("Ingredientes disponibles para pizza vegetariana:\n");
        printf("1. Pimiento\n");
        printf("2. Tofu\n");
        printf("Elija un ingrediente (ingrese el número): ");
        
        int opcionIngrediente;
        scanf("%d", &opcionIngrediente);
        
        if (opcionIngrediente == 1) {
            printf("Ha elegido: Pimiento\n");
            sprintf(listaIngredientes, "Mozzarella, Tomate y Pimiento");
        } else if (opcionIngrediente == 2) {
            printf("Ha elegido: Tofu\n");
            sprintf(listaIngredientes, "Mozzarella, Tomate y Tofu");
        } else {
            printf("Ingrediente no válido. Se usará Pimiento por defecto.\n");
            sprintf(listaIngredientes, "Mozzarella, Tomate y Pimiento");
        }
    } else {
        esVegetariana = 0;
        printf("Ingredientes disponibles para pizza no vegetariana:\n");
        printf("1. Peperoni\n");
        printf("2. Jamón\n");
        printf("3. Salmón\n");
        printf("Elija un ingrediente (ingrese el número): ");
        
        int opcionIngrediente;
        scanf("%d", &opcionIngrediente);
        
        if (opcionIngrediente == 1) {
            printf("Ha elegido: Peperoni\n");
            sprintf(listaIngredientes, "Mozzarella, Tomate y Peperoni");
        } else if (opcionIngrediente == 2) {
            printf("Ha elegido: Jamón\n");
            sprintf(listaIngredientes, "Mozzarella, Tomate y Jamón");
        } else if (opcionIngrediente == 3) {
            printf("Ha elegido: Salmón\n");
            sprintf(listaIngredientes, "Mozzarella, Tomate y Salmón");
        } else {
            printf("Ingrediente no válido. Se usará Peperoni por defecto.\n");
            sprintf(listaIngredientes, "Mozzarella, Tomate y Peperoni");
        }
    }
    
    printf("\nSu pizza es: \n");
    if (esVegetariana) {
        printf("- Tipo: Vegetariana\n");
    } else {
        printf("- Tipo: No vegetariana\n");
    }
    printf("- Ingredientes: %s\n", listaIngredientes);
    printf("¡Gracias por su pedido en Pizzería Bella Napoli!\n");
    
    return 0;
}