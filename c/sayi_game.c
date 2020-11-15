#include <stdio.h>

/* var */
int possible_digit1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int possible_digit2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int possible_digit3[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int possible_digit4[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


/* prototype */
int guessNumber(int current_guess, int correct_number, int correct_place);
int getIndexValueOfDigit(int index, int digit);
int getDigitCount(int digit);
int getPowerOfDigit(int power, int digit);


/* main */
int
main()
{
  int correct_number = 0;
  int correct_place = 0;
  int current_guess = 1234;

  printf("My guess is: %d\nWhat is your hint: ", current_guess);
  scanf("%d %d", &correct_number, &correct_place);

  printf("%d, %d", correct_number, correct_place);


  if (correct_place == 4)
    printf("I am faster then you. :)");
  else
    guessNumber(current_guess, correct_number, correct_place);


  return 0;
}


/* function */
int
guessNumber(int current_guess, int correct_number, int correct_place)
{
  int zeroth = getIndexValueOfDigit(0, current_guess);
  int first  = getIndexValueOfDigit(1, current_guess);
  int second = getIndexValueOfDigit(2, current_guess);
  int third  = getIndexValueOfDigit(3, current_guess);

  if (correct_place == 0 && correct_number == 0)
  {
    deteleFromArray(zeroth, possible_digit1);
  }
  return 0;
}
void deleteFromArray()
int
getIndexValueOfDigit(int index, int digit)
{
  int i = 0;
  int value = 0;
  int digit_count = getDigitCount(digit);

  if (digit_count <= index)
    return -1;
  else {
    value =
      digit % getPowerOfDigit(digit_count - index, 10) /
      getPowerOfDigit(digit_count - index - 1, 10);

    return value;
  }
}
int
getDigitCount(int digit)
{
  int i = 1;
  int count = 1;

  while (digit / (i * 10) != 0) {
    i *= 10;
    count++;
  }

  return count;
}
int
getPowerOfDigit(int power, int digit)
{
  int i = 1;
  int result = digit;
  while (i < power) {
    result *= digit;
    i++;
  }

  return result;
}
