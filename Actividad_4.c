int main(){
    int arreglo[5],opcion,suma,suma2,contador,promedio,n;
    char caracter[20];

    while(opcion!=7)
    {
        printf("\n ----MENU----\n");
        printf(" 1. Llenar el arreglo\n 2. Mostrar el arreglo\n 3. Sumar datos del arreglo y mostrar el total\n 4. Mostrar el promedio\n 5. Mostrar n veces un arreglo\n 6.Configuracion de personajes\n 7.SALIR\n Elige tu opcion: ");
        scanf("%i",&opcion);
        switch (opcion)
        {
        case 1: {printf("\n");
                for (contador=0; contador<=4; contador++)
                {
                   printf("Dame el elemento del arreglo[%i]: ",contador);
                   scanf("%i", &arreglo[contador]);
                }
                break;}
        case 2: {printf("\n");
                for (contador=0; contador<=4; contador++)
                {
                    printf("Arreglo[%i]: %i\n",contador,arreglo[contador]);
                }
                break;}
        case 3: {suma=0;
                for(contador=0; contador<=4; contador++){
                    suma=suma+arreglo[contador];
                }
                printf("\nTotal de la suma= %i\n",suma);
                break;}
        case 4: {suma2=0;
                for(contador=0; contador<=4; contador++){
                    suma2=suma2+arreglo[contador];
                }
                promedio= suma2/contador;
                printf("\nEl promedio es: %i\n",promedio);
                break;}
        case 5: {
                printf("\nDame la palabra: ");
                scanf("%s",&caracter);
                printf("\nCuantas veces quiere que lo imprima?: ");
                scanf("%i",&n);
                mostrar(n,caracter);
                break;
                }
        case 6: {
                personajes();

                }
        case 7: exit(0);
        default: {printf("\nOpcion no valida, vuelve a intentarlo\n");
            break;}
        }
    }
}