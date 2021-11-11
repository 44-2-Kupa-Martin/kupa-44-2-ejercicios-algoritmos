#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double *quadratic_formula(double a, double b, double c) {
  double discriminant = (b*b)+(-4*a*c);
  if (discriminant < 0) {
    double *roots= malloc(sizeof(double));
    roots[0]= (double)NAN;
    roots[1]= (double)NAN;
    return roots;
  }
  double *roots= malloc(2*sizeof(double));
  roots[0]= (-b + sqrt(discriminant))/2*a;
  roots[1]= (-b - sqrt(discriminant))/2*a;
  return roots;
}

int main(void) {
  double *roots= quadratic_formula(1, 2, 3);
  for (size_t i = 0; i < 2; i++) {
    printf("%f\n", roots[i]);
  }
  free(roots);
  return 0;
}
