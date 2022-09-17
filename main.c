#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//#include <cmath>

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
void quadrangle_area_dimension_cartesian();

void rectangle_area() {
  float a, b, P;
  printf("Podaj dlugosci bokow a i b prostokata: \n");
  scanf("%f%f", &a, &b);
  P = a * b;
  printf("Pole prostokata jest rowne: %f\n", P);
}

void circle_area() {
  float r, P;
  printf("Podaj dlugosc promienia r kola: \n");
  scanf("%f", &r);
  P = 3.1415 * r * r;
  printf("Pole kola jest rowne: %f\n", P);
}

void triangle_area() {
  float a, h, P;
  printf("Podaj dlugosc a boku oraz wysokosc h trojkata: \n");
  scanf("%f%f", &a, &h);
  P = (a * h) / 2.0;
  printf("Pole trojkata jest rowne: %f\n", P);
}

void trapeze_area() {
  float a, b, h, P;
  printf("Podaj dlugosc a i b boku oraz wysokosc h trapezu: \n");
  scanf("%f%f%f", &a, &b, &h);
  P = ((a + b) * h) / 2.0;
  printf("Pole trapezu jest rowne: %f\n", P);
}

void rectangle_dimension() {
  float a, b, D;
  printf("Podaj dlugosci bokow a i b prostokata: \n");
  scanf("%f%f", &a, &b);
  D = 2 * (a + b);
  printf("obwód prostokata jest rowny: %f\n", D);
}

void circle_dimension() {
  float r, D;
  printf("Podaj promien r koła: \n");
  scanf("%f", &r);
  D = 2 * 3.1415 * r;
  printf("Obwód koła jest rowny: %f\n", D);
}

void triangle_dimension() {
  float a, b, c, D;
  printf("Podaj dlugosci bokow a, b, c: \n");
  scanf("%f%f%f", &a, &b, &c);
  D = a + b + c;
  printf("Obwód trojkata jest rowny: %f\n", D);
}

void trapeze_dimension() {
  float a, b, c, d, D;
  printf("Podaj dlugosci bokow a, b, c, d: \n");
  scanf("%f%f%f%f", &a, &b, &c, &d);
  D = a + b + c + d;
  printf("Obwód trapezu jest rowny: %f\n", D);
}

void triangle_area_dimension_cartesian() {
  float Xa, Ya, Xb, Yb, Xc, Yc, D, P;
  printf("Enter  Cartesian coordinate triangle vertices Xa, Ya, Xb, Yb, Xc, Yc: \n");
  scanf("%f%f%f%f%f%f", &Xa, &Ya, &Xb, &Yb, &Xc, &Yc);
  P = fabs((Xb - Xa) * (Yc - Ya) - (Yb - Ya) * (Xc - Xa)) / 2;
  D = sqrtf(((Xb - Xa) * (Xb - Xa) + (Yb - Ya) * (Yb - Ya)))+sqrtf(((Xc - Xb) * (Xc - Xb) + (Yc - Yb) * (Yc - Yb)))+sqrtf(((Xa - Xc) * (Xa - Xc) + (Ya - Yc) * (Ya - Yc)));
  printf("Area of triangle in the Cartesian coordinate:: %f\n", P);
  printf("Dimension of triangle in the Cartesian coordinate: %f\n", D);
}

void quadrangle_area_dimension_cartesian() {
   float Xa, Ya, Xb, Yb, Xc, Yc, Xd, Yd, D, P;
  printf("Enter  Cartesian coordinate quadrangle vertices Xa, Ya, Xb, Yb, Xc, Yc, Xd, Yd: \n");
  scanf("%f%f%f%f%f%f%f%f", &Xa, &Ya, &Xb, &Yb, &Xc, &Yc, &Xd, &Yd);
  P = (fabs((Xb - Xa) * (Yc - Ya) - (Yb - Ya) * (Xc - Xa)) / 2)+(fabs((Xd - Xa) * (Yc - Ya) - (Yd - Ya) * (Xc - Xa)) / 2);
  D = sqrtf((Xb - Xa) * (Xb - Xa) + (Yb - Ya) * (Yb - Ya))+sqrtf((Xc - Xb) * (Xc - Xb) + (Yc - Yb) * (Yc - Yb))+sqrtf((Xd - Xc) * (Xd - Xc) + (Yd - Yc) * (Yd - Yc))+sqrtf((Xa - Xd) * (Xa - Xd) + (Ya - Yd) * (Ya - Yd));
  printf("Area of quadrangle in the Cartesian coordinate: %f\n", P);
  printf("Dimension of quadrangle in the Cartesian coordinate: %f\n", D);
}

int main() {
  char choice;
  while (1) {
    choice = menu();
    switch (choice) {
    case 'a':
      rectangle_area();
      break;
    case 'b':
      circle_area();
      break;
    case 'c':
      triangle_area();
      break;
    case 'd':
      trapeze_area();
      break;
    case 'e':
      rectangle_dimension();
      break;
    case 'f':
      circle_dimension();
      break;
    case 'g':
      triangle_dimension();
      break;
    case 'h':
      trapeze_dimension();
      break;
    case 'i':
      triangle_area_dimension_cartesian();
      break;
    case 'j':
      quadrangle_area_dimension_cartesian();
      break;
    case 'q':
      return (0);
    default:
      continue;
    }
  }
}

char menu() {
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
  puts("j) dimension and area of quadrangle in the Cartesian coordinate ");

  puts("q) exit");
  puts("\n");

  scanf(" %c", &ch);
  return ch;
}
