#include <stdio.h>

int main()
{
    int j1, j2;

    printf("\n--- Piedra Papel O Tijera ---\n");
    printf("1- Piedra\n");
    printf("2- Papel\n");
    printf("3- Tijera\n");

    printf("Introduce la jugada del jugador 1: ");
    scanf("%d",&j1);
    printf("Introduce la jugada del jugador 2: ");
    scanf("%d",&j2);

    if (j1 == 1)
    {
        switch (j2)
        {
        case 1:
            printf("Empate");
            break;

        case 2:
            printf("Gana jugador 2");
            break;

        case 3:
            printf("Gana jugador 1");
            break;
        
        default:
            printf("Error");
            return 1;
        }
    }
    else
    {
        if (j1 == 2)
        {
            switch (j2)
            {
            case 1:
                printf("Gana jugador 1");
                break;

            case 2:
                printf("Empate");
                break;

            case 3:
                printf("Gana jugador 2");
                break;
            
            default:
                printf("Error");
                return 1;
            }
        }
        else
        {
            switch (j2)
            {
            case 1:
                printf("Gana jugador 2");
                break;

            case 2:
                printf("Gana jugador 1");
                break;

            case 3:
                printf("Empate");
                break;
            
            default:
                printf("Error");
                return 1;
            }

        }
    }


    return 0;
}