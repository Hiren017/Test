#include <stdio.h>

struct metric
{
    int metres;
    int centimetres;
};
struct british
{
    int feet;
    int inches;
};
int main()
{
    struct metric m1, m2;
    struct british m3,m4;

    printf("Enter the metres for m1: ");
    scanf(" %d ", &m1.metres);
    printf("Enter the centimetres for m1: ");
    scanf(" %d ", &m1.centimetres);
    printf("Enter the metres for m2: ");
    scanf(" %d ", &m2.metres);
    printf("Enter the centimetres for m2: ");
    scanf(" %d ", &m2.centimetres);

    m1.metres += m2.metres;
    m1.centimetres += m2.centimetres;

    m3.feet = m1.metres * 3.28084;
    m4.inches = m1.centimetres * 0.393701;

    printf("The total distance in metres is %d metres and %d centimetres.\n", m1.metres, m1.centimetres);
    printf("The total distance in feet is %d feet and %d inches.\n", m3.feet, m4.inches);
    return 0;
}

