#include <stdio.h>
#include
#include


 * main - entry
 * Description: checks on the last digit of the number stored in the var
 * Return: Always 0 (success)


int



  int n,



  n = rand() - RAND_MAX /

  m = n %

  if (m >



      printf("Last digit of %d is %d and is greater than 5\n", n,



  else if (m < 6 && m !=



      printf("Last digit of %d is %d and is less than 6 and not 0\n", n,







      printf("Last digit of %d is %d and is 0\n", n,



  return



