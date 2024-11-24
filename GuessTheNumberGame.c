#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// this function giving you rondom number between minimum and maximum values
int randNumber(int min, int max)
{
  return (rand() % (max - min + 1) + min);
}
void Guess(int health, int computersNumber)
{
  int guess;
  scanf("%d", &guess);
  if (computersNumber == guess)
  {
    printf("You Win !!\tThe number is: %d", computersNumber);
  }
  else
  {
    health--;
    printf("\nWorng Number budy, Remaning health is: %d\n", health);
    if (guess < computersNumber)
    {
      printf("try more higher number\n");
    }
    else if (guess > computersNumber)
    {
      printf("try more lower number\n");
    }
    Guess(health, computersNumber);
  }
}
int main()
{
  int health = 3;
  int randomNumber = randNumber(0, 5);
  Guess(health, randomNumber);
  return 0;
}