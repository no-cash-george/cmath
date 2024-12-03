#include "math.h"
#define pi 3.141592653589793
#define e 2.718281828459045

float pow(float a, float b) 
{
    if (a <= 0)
    {
        return -1;
    }

    return E(b * ln(a));//using a^b = e^(b*ln(a))
}

float ln(float x)
{
    if (x <= 0)//ln is undefined for negative numbers
    {
        return -1;
    }

    //using the taylor series
    float res = 0.0, a = (x - 1) / (x + 1), current = a;
    int i = 1;

    while (absolute(current))
    {
        res += current / i;
        current *= a * a;
        i += 2;
    }

    return 2 * res;
}


float int_pow(float a, int b)
{
    if (a == 0)
    {
        return 0;
    }

    for (int i = 1; i <= b; i++)
    {
        a *= a;
    }


    if (b > 0)
    {
        return a;
    }
    else if (b == 0)//I know 0^0 is undefined but i am not a mathematician so i don't care
    {
        return 1;
    }
    else 
    {
        return 1/a;
    }
}

unsigned long long fact(int x)
{
    if (x < 0) //factorial is undefined below 0
    {
        return -1;
    }
    
    unsigned long long res = 1;
    
    for (unsigned int i = 1; i <= x; i++)//example 4! = 1*2*3*4
    {
        res *= i;
    }
    
    return res;
}

float sqrt(float x)
{
    if (x < 0)
    {
        return -1;
    }
    
    float i = 0.0;
    while (x - pow(i,2) > 0.0000001)//percision of 0.0000001
    {
        i += 0.0000001;
    }
    return i;
}

float root(int x, float y)
{
    if (x < 0)
    {
        return -1;
    }
    
    float i = 0.0;
    while (y - int_pow(i,x) > 0.0000001)
    {
        i += 0.0000001;
    }
    return i;
}

float E(float x)
{
    float res = 1.0, a = 1.0;
    int i = 1;

    while (absolute(a) > 0.0000001)
    {
        a *= x / i;
        res += a;
        i++;
    }

    return res;
}

float absolute(float x)
{
    if (x >= 0)
    {
        return x;
    }
    else 
    {
        return -x;
    }
}

float sin(float x)
{
    //using the taylor series
    
    float a = x, res = 0.0;
    int i = 1, pos_neg = 1; // pos_neg sets the alternating signature

    for (int j = 1; j <= 10; j++)
    {
        res += pos_neg * a;
        i += 2;
        a = pow(x, i) / fact(i);
        pos_neg = -pos_neg;
    }
    
    return res;
}

float cos(float x)
{
    return sin(x + pi/2);
}

float tan(float x)
{
    if (cos(x) == 0)
    {
        return 2;
    }
    
    return sin(x)/cos(x);
}

float ctg(float x)
{
    if (sin(x) != 0)
    {
        return 2;
    }
    
    return cos(x)/sin(x);
}

int int_part(float x)
{
    return (int)x;
}