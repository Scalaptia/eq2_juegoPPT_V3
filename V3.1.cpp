#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int j1, j2, aux;

    printf("Jugadas: \n 1) Piedra\n 2) Papel\n 3) Tijeras\n Introduce la jugada del jugador 1: ");
    scanf("%d", &j1);
    printf("Introduce la jugada del jugador 2: ");
    scanf("%d", &j2);

    aux = pow(j1, j2);

    if (aux != 1)
    {
        switch (aux)
        {
            case 2:
                printf("Gano el jugador 2, papel cubre piedra");
                break;

            case 4:
            case 27:
                printf("Empate");
                break;

            case 8:
                printf("Gano el jugador 3, tijeras cortan papel");
                break;

            case 3:
                printf("Gano el jugador 1, piedra rompe tijeras");
                break;

            case 9:
                printf("Gano el jugador 3, tijeras cortan papel");
                break;

            default:
                printf("La eleccion de alguno de los jugadores no es valida");
                break;
        }
    }

    if (aux == 1)
    {
        switch (j2)
        {
            case 1:
                printf("Empate");
                break;

            case 2:
                printf("Gano el jugador 2, papel cubre piedra");
                break;

            case 3:
                printf("Gano el jugador 1, piedra rompe tijeras");
                break;

            default:
                printf("La eleccion de alguno de los jugadores no es valida");
                break;
        }
    }
    return 0;
}