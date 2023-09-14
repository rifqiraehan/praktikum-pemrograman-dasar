#include <stdio.h>

int main() {
  float accumulator = 0.0, operand; char operator;

  printf("Mulai perhitungan\n");

  ulang:
    printf("= ");
    scanf("%f %c", &operand, &operator);

    switch (operator) {
      case 's': accumulator = operand; break;
      case 'e': return 0;
      case '+': accumulator += operand; break;
      case '-': accumulator -= operand; break;
      case '*': accumulator *= operand; break;
      case '/': accumulator /= operand; break;
      default:  printf("Operator tidak valid\n");
    }

    printf("%.6f\n", accumulator);
  goto ulang;

  return 0;
}