#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  struct matrix *edges;
  struct matrix *trans = new_matrix(4, 4);
  edges = new_matrix(4, 4);
  printf("4 by 4 of zeroes\n");
  print_matrix(edges);


  ident(edges);
  printf("4 by 4 identity matrix\n");
  print_matrix(edges);


  matrix_mult(trans,edges);
  print_matrix(edges);

  free_matrix(edges );

}
