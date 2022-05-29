#include<stdio.h>
#include<math.h>
#include<stdlib.h>

char menu();
void rectangle_area();
void circle_area();
void triangle_area();
void trapeze_area();
void rectangle_dimension();
void circle_dimension();
void triangle_dimension();
void trapeze_dimension();
void triangle_area_dimension_cartesian();



void rectangle_area()
{
    float a, b, P;
    printf("Podaj dlugosci bokow a i b prostokata: \n");
    scanf_s("%f%f", &a, &b);
    P = a * b;
    printf("Pole prostokata jest rowne: %f\n", P);
}

void circle_area()
{
    float r, P;
    printf("Podaj dlugosc promienia r kola: \n");
    scanf_s("%f", &r);
    P = 3.1415 * r * r;
    printf("Pole kola jest rowne: %f\n", P);
}

void triangle_area()
{
    float a, h, P;
    printf("Podaj dlugosc a boku oraz wysokosc h trojkata: \n");
    scanf_s("%f%f", &a, &h);
    P = (a * h) / 2.0;
    printf("Pole trojkata jest rowne: %f\n", P);
}


void trapeze_area()
{
    float a, b, h, P;
    printf("Podaj dlugosc a i b boku oraz wysokosc h trapezu: \n");
    scanf_s("%f%f%f", &a, &b, &h);
    P = ((a+b) * h) / 2.0;
    printf("Pole trapezu jest rowne: %f\n", P);
}

void rectangle_dimension()
{
    float a, b, D;
    printf("Podaj dlugosci bokow a i b prostokata: \n");
    scanf_s("%f%f", &a, &b);
    D = 2 * (a + b);
    printf("obwód prostokata jest rowny: %f\n", D);
}

void circle_dimension()
{
    float r, D;
    printf("Podaj promien r koła: \n");
    scanf_s("%f", &r);
    D = 2 * 3.1415 * r;
    printf("Obwód koła jest rowny: %f\n", D);
}

void triangle_dimension()
{
    float a, b, c, D;
    printf("Podaj dlugosci bokow a, b, c: \n");
    scanf_s("%f%f%f" , &a, &b, &c);
    D = a+b+c;
    printf("Obwód trojkata jest rowny: %f\n", D);
}

void trapeze_dimension()
{
    float a, b, c, d, D;
    printf("Podaj dlugosci bokow a, b, c, d: \n");
    scanf_s("%f%f%f%f", &a, &b, &c, &d);
    D = a + b + c + d;
    printf("Obwód trapezu jest rowny: %f\n", D);
}

void triangle_area_dimension_cartesian()
{
    float Xa, Ya, Xb, Yb, Xc, Yc, D, P;
    printf("Podaj wspolrzeedne bokow trojkata Xa, Ya, Xb, Yb, Xc, Yc: \n");
    scanf_s("%f%f%f%f%f%f", &Xa, &Ya, &Xb, &Yb, &Xc, &Yc);
    P = abs((Xb-Xa)*(Yc-Ya)-(Yb-Ya)*(Xc-Xa))/2;
    D = 1;
    printf("Pole trojkata ze wspolrzędnych: %f\n", P);

}


int main()
{
    char choice;
    while (1)
    {
        choice = menu();
        switch (choice)
        {
        case 'a': rectangle_area();
            break;
        case 'b': circle_area();
            break;
        case 'c': triangle_area();
            break;
        case 'd': trapeze_area();
            break;
        case 'e': rectangle_dimension();
            break;
        case 'f': circle_dimension();
            break;
        case 'g': triangle_dimension();
            break;
        case 'h': trapeze_dimension();
            break;
        case 'i':  triangle_area_dimension_cartesian();
            break;
        case 'q': return(0);
        default: continue;
        }
    }
}

char menu()
{
    char ch;

    puts("GEOMETRIC CALCULATOR calculates:");
    puts("a) area of a rectangle");
    puts("b) area of a circle");
    puts("c) area of a triangle");
    puts("d) area of a trapeze");
    puts("e) dimension of a rectangle");
    puts("f) dimension of a circle");
    puts("g) dimension of a triangle");
    puts("h) dimension of a trapeze");
    puts("i) dimension and area of triangle in the Cartesian coordinate ");


    puts("q) exit");
    puts("\n");


    scanf_s(" %c", &ch);
    return ch;
}