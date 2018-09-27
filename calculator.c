#include <stdio.h>
int main(int argc, char const *argv[]) {
  int choice;
  int firstOperand;
  int secondOperand;


  do {
    printf("Choose one of the following operations:\n");
    printf("Add (1)\n");
    printf("Subtract (2)\n");
    printf("Multiply (3)\n");
    printf("Divide\n");
    printf("Enter your choice: ");
    scanf("%d\n", &choice);

    if (choice >= 4 && choice < 0) {
      printf("Input not allowed, please try again.\n");
    }
    else if (choice <= 4 && choice > 0) {
      double result = 0;
      printf("Please enter the first Operand: ");
      scanf("%d\n", &firstOperand);
      printf("Please enter the seconnd Operand: ");
      scanf("%d\n", &secondOperand);

      if (choice == 1) {
        result = firstOperand + secondOperand;
      }
      else if (choice == 2) {
        result = firstOperand - secondOperand;

      else if (choice == 3) {
        result = firstOperand * secondOperand;
      }
      else if (choice ==4 && secondOperand != 0) {
        result = firstOperand / secondOperand;
      }
    }
  } while(choice != -1);

  return 0;
}
