#include <stdio.h>

/**
 * main - entry point                                                                                                    
 * Description: prints all single digit numbers of base 10 starting from 0\n                                                
 * Return: Always 0 (success)                                                                                                
 */



int main(void)

{
  
  int x;
  
  for (x = 0; x < 10; x++)
    
    {
      
      putchar(x + '0');
      
    }
  
  putchar('\n');
  
  return (0);
  
}

