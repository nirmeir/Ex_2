#include <stdio.h>
#include "my_mat.h"
#include <math.h>
#define n 10
int arr[n][n];
int min(int, int);
void help();

void funA()
{

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  help();
}

void funB()
{

  int i;
  int j;

  scanf("%d%d", &i, &j);

  if (arr[i][j] == 0)
  {
    printf("False\n");
  }
  else
  {
    printf("True\n");
  }
}

int min(int a, int b)
{
  if (a == 0)
  {
    return b;
  }
  if (b == 0)
  {
    return a;
  }

  if (a < b)
  {
    return a;
  }
  return b;
}

void help()
{
  for (int k = 0; k < n; k++)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {

        if (i == j)
        {
          arr[i][j] = 0;
        }

        else if (i == k || k == j)
        {
          arr[i][j] = arr[i][j];
        }
        else
        {
          int sum = arr[i][k] + arr[k][j];
          if (arr[i][k] == 0 || arr[k][j] == 0)
          {
            sum = 0;
          }
          arr[i][j] = min(arr[i][j], sum);
        }
      }
    }
  }
}

void funC()
{

  int i;
  int j;

  scanf("%d%d", &i, &j);

  if (arr[i][j] == 0 || i == j)
  {
    printf("-1\n");
  }

  else
  {
    printf("%d\n", arr[i][j]);
  }
}