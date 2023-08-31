#include <stdio.h>

int main() {
  float accumulator = 0.0;
  char operator;
  float operand;

  printf("Mulai perhitungan\n");

  while (1) {
    printf("= ");
    scanf("%f %c", &operand, &operator);

    switch (operator) {
      case 'S':
        accumulator = operand;
        break;
      case 'E':
        return 0;
      case '+':
        accumulator += operand;
        break;
      case '-':
        accumulator -= operand;
        break;
      case '*':
        accumulator *= operand;
        break;
      case '/':
        accumulator /= operand;
        break;
      default:
        printf("Operator tidak valid\n");
    }

    printf("%.4f\n", accumulator);
  }

  return 0;
}
