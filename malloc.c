#include <stdio.h>
#include <stdlib.h>

int mian() {
  int *ptr;

  ptr = (int *)malloc(sizeof(int));

 *ptr = 10;

 printf("%d", *ptr);

return 0;

}
