#include<stdio.h>
int main(){
    int ingrediente, opcion;
    printf("Pizza vegetariana? (1-si, 2-no)\n");
    scanf("%d",&opcion);
    if(opcion == 1)
        printf("1.Pimiento\n2.Tofu\nIngresa el numero correspondiente del ingrediente que desees:");
    else
        printf("1.Pepperoni\n2.Jamon\n3.Salmon\nIngresa el numero correspondiente del ingrediente que desees:");

    scanf("%d",&ingrediente);
    if(opcion == 1 && ingrediente == 1)
        printf("Pizza vegetariana\nIngredientes: Pimiento, Mozarella, Tomate.");

    else if(opcion == 1 && ingrediente == 2)
        printf("Pizza vegetariana\nIngredientes: Tofu, Mozarella, Tomate.");

    else if(opcion == 2 && ingrediente == 1)
        printf("Pizza normal\nIngredientes: Pepperoni, Mozarella, Tomate.");

    else if(opcion == 2 && ingrediente == 2)
        printf("Pizza normal\nIngredientes: Jamon, Mozarella, Tomate.");

    else if(opcion == 2 && ingrediente == 3)
        printf("Pizza normal\nIngredientes: Salmon, Mozarella, Tomate.");

    else
        printf("Ingresaste un dato incorrecto/invalido");
    return 0;
}
