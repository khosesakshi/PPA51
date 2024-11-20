//Predict the output of below code snippet & draw its diagrammatic representation.

#include<stdio.h>

int main() {

double no = 3.14;

// Consider address of no as 100

double *a = &no;

// Consider address of a as 200

double **b = &a;

// Consider address of b as 300

double ***c = &b;

// Consider address of c as 400

double ****d = &c;

// Consider address of d as 500

 printf("%d",sizeof(no));

printf("%d",sizeof(a));

printf("%d",sizeof(b));

printf("%d",sizeof(c));

printf("%d",sizeof(d));

printf("%d\n",sizeof(**d));

printf("%d\n",sizeof(**d));

printf("%d\n",sizeof(*a));

printf("%d\n",sizeof(*c));

printf("%d",sizeof(**c));

return 0;
}