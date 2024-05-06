#include <stdio.h>

int main()
{
    float hour, minutes;
    printf("Digite a hora (formato 24): ");
    scanf("%f", &hour);
    minutes = (hour * 60);
    printf("A hora em minutos e: %.f\n", minutes);
    return 0;
}
