#include <stdio.h>

int main() {
  
  int min = 2 * 60 + 20;
  int sec = (2 * 60 + 20) * 60;

  printf("Total minuts = %d\n", min);
  printf("Total seconds = %d\n", sec);

  int x, y;
  scanf("%d", &x);
  scanf("%d", &y);

  printf("%d + %d = %d\n", x, y, x + y);

  int z, w;
  scanf("%d %d", &z, &w);
  printf("%d, %d", z, w);

  return 0;
}