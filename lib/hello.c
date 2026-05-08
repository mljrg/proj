#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, ""); // Support UTF-8
  printf("Hello World\n");
  printf("Olá Mundo\n");
  printf("你好, 世界\n");
  return 0;
}
