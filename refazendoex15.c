#include <stdio.h>
#include <math.h>
int main(void)
{
    int planet;
    float peso;

    printf("Informe seu peso na Terra\n");
    printf("-> ");
    scanf("%fkg", &peso);
    printf("\n");

    printf("===Escolha um dos seguintes planetas===\n");
    printf("1 = Mercúrio\n");
    printf("2 = Vênus\n");
    printf("3 = Marte\n");
    printf("4 = Júpiter\n");
    printf("5 = Saturno\n");
    printf("6 = Urano\n");
    printf("========================================\n");
    printf("-> ");
    scanf("%d", &planet);
    printf("\n");

    switch (planet)
    {
    case 1:
        printf("Seu peso em Mercúrio será: %.2fkg\n", (peso/10)*3,7);
        break;
    case 2:
        printf("Seu peso em Vênus será: %.2fkg\n", (peso/10)*8,8);
        break;
    case 3:
        printf("Seu peso em Marte será: %.2fkg\n", (peso/10)*3,8);
        break;
    case 4:
        printf("Seu peso em Júpiter será: %.2fkg\n", (peso/10)*26,4);
        break;
    case 5:
        printf("Seu peso em Saturno será: %.2fkg\n", (peso/10)*11,5);
        break;
    case 6:
        printf("Seu peso em Urano será: %.2fkg\n", (peso/10)*11,7);
        break;
    default:
        printf("As infromações são inválidas\n");
        break;
    }
    
    return 0;
}
/*
1 Mercúrio 3,7
2 Vênus 8,8
3 Marte 3,8
4 Júpiter 26,4
5 Saturno 11,5
6 Urano 11,7
*/