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
  edges = new_matrix(4, 4);
  printf("4 by 4 of zeroes\n");
  print_matrix(edges);

//identity matrix test
  ident(edges);
  printf("4 by 4 identity matrix\n");
  print_matrix(edges);

//matrix multiplication test
  struct matrix *trans;
  trans = new_matrix(4,4);
  matrix_mult(trans, edges);
  printf("transform edges to all zeroes\n");
  print_matrix(edges);


  for(int i = 0; i < 5; i++)
    add_point(edges,2,4,9);
  printf("add 1 points to a 4 by 4 matrix\n");
  print_matrix(edges);


  free_matrix(edges );
//  free_matrix(trans);
}
