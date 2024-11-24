#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <string.h>
int randNumber(int min, int max)
{
  return (rand() % (max - min + 1) + min);
}
void didWin(char v1[], char v2[])
{
  if (strcmp(v1, v2) == 0)
  {
    printf("Tie\n");
  }
  else if (strcmp(v1, "Rock") == 0 && strcmp(v2, "Paper") == 0)
  {
    printf("You Lose\n");
  }
  else if (strcmp(v1, "Rock") == 0 && strcmp(v2, "Scissors") == 0)
  {
    printf("You Win\n");
  }
  else if (strcmp(v1, "Paper") == 0 && strcmp(v2, "Rock") == 0)
  {
    printf("You Win\n");
  }
  else if (strcmp(v1, "Paper") == 0 && strcmp(v2, "Scissors") == 0)
  {
    printf("You Lose\n");
  }
  else if (strcmp(v1, "Scissors") == 0 && strcmp(v2, "Rock") == 0)
  {
    printf("You Lose\n");
  }
  else if (strcmp(v1, "Scissors") == 0 && strcmp(v2, "Paper") == 0)
  {
    printf("You Win\n");
  }
}
int main()
{
  srand(time(0));
  char rock[] = "Rock";
  char paper[] = "Paper";
  char scissors[] = "Scissors";
  char *arrayOfOptions[] = {rock, paper, scissors};
  int answer = 0;
  printf("Choose an option;\n1-)%s\n2-)%s\n3-)%s\n", rock, paper, scissors);
  scanf("%d", &answer);
  if (answer < 1 || answer > 3)
  {
    printf("Invalid choice!\n");
    return 1;
  }
  int randomNumber = randNumber(0, 2);

  printf("\nComputer Choose is: %s\n", arrayOfOptions[randomNumber]);

  didWin(arrayOfOptions[answer], arrayOfOptions[randomNumber]);
  return 0;
}
