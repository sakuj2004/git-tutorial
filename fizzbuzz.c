#include <stdio.h>
int main(void)
{
  int i;
  for (i = 0; i <= 100; i++)
  {
    int FizzBuzz = i % 15;
    int Fizz = i % 3;
    int Buzz = i % 5;
    int git = i % 7;
    if (FizzBuzz == 0 && i != 0)
    {
      printf("FizzBuzz: %d\n", i);
    }
    else if (Fizz == 0 && i != 0)
    {
      printf("Fizz: %d\n", i);
    } else if (Buzz == 0 && i != 0)
    {
      printf("Buzz: %d\n", i);
    }
    else if (git==0&&i!=0)
    {
      printf("git: %d\n",i);
    }
    else
    {
      printf("i: %d\n", i);
    }
  }
  return 0;
}
