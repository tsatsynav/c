#include <stdio.h>

int main() {
  
  printf("%d + %d = %d\n", 2, 3, 5);
  printf("%d + %d = %d\n", 2, 4, 2 + 4);
  printf("5 + 5 = %d\n", 5 + 5);
  printf("5 + 5 = %d\n", 10);
  printf("Num of PI: %d\n", 3.142857); // неверная форматная спецификация
  printf("Num of PI: %f\n", 3.142857); // верная форматная спецификация
  printf("Num of PI: %f\n", 3.142857);
  printf(""); // пустая строка не печатается
  printf("2 hours and 20 minuts = %d minuts\n", 2 * 60 + 20); // вся логика рсчетов во второй части форматируемой строки
  printf("2 hours and 20 minuts = %d seconds\n", (2 * 60 + 20) * 60);
  printf("2 hours and 20 minuts = %f seconds\n", (2 * 60 + 20) * 60); // почему-то тянет предыдущий float

  return 0;
}