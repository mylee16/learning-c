#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float ConvertToCelsius(int f) {
    float celsius;
    celsius = (5.0/9.0) * (f - 32.0);
    return celsius;
}


int main()
{
    float ConvertToCelsius(int f);

    printf("%s %s\n", "fahr", "celsius");

    for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3d %6.1f\n", fahr, ConvertToCelsius(fahr));

    }

}