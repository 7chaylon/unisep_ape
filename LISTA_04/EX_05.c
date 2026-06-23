#include <stdio.h>

float celsiusParaFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

int main()
{
    float celsius;
    float fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusParaFahrenheit(celsius);

    printf("A temperatura em Fahrenheit eh: %.2f", fahrenheit);

    return 0;
}
