#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    char *bits;
    double fraction;
    double weight;
    double significand;
    int exponent_bits;
    int exponent;
    char sign_char;
    int sign_value;
    double value;
    int i;

    if (argc != 2 || strlen(argv[1]) != 32)
    {
        return 1;
    }

    bits = argv[1];

    fraction = 0.0;
    weight = 0.5;

    for (i = 9; i < 32; i++)
    {
        if (bits[i] == '1')
        {
            fraction += weight;
        }
        weight /= 2.0;
    }

    significand = 1.0 + fraction;

    exponent_bits = 0;

    for (i = 1; i <= 8; i++)
    {
        exponent_bits *= 2;

        if (bits[i] == '1')
        {
            exponent_bits += 1;
        }
    }

    exponent = exponent_bits - 127;

    if (bits[0] == '1')
    {
        sign_char = '-';
        sign_value = -1;
    }
    else
    {
        sign_char = '+';
        sign_value = 1;
    }

    value = sign_value * significand * pow(2.0, exponent);

    printf("%.15f\n", significand);
    printf("%d\n", exponent);
    printf("%c\n", sign_char);
    printf("%.15f\n", value);

    return 0;
}