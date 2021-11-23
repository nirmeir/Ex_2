#include <stdio.h>
#include "my_mat.h"
#include <math.h>
#define n 10
int arr[n][n];
int min(int,int);
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

  int i = 0;
  int j = 0;

  scanf("%d%d", &i, &j);

  if (arr[i][j] == 0)
  {
    printf("False\n");
  }
  printf("True\n");
}

int min(int a, int b)
{
  if (a == 0)
  {
    return b;
  }
  if(b == 0){
    return a;
  }

   if (a > b)
    {
      return b;
    }
    return a;
  }


  void help()
  {

    for (int k = 0; k < n; k++)
    {
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
        {
          int sum = arr[i][k]+arr[k][j];

          if (arr[i][k] || arr[k][j] == 0){
          sum = 0;
        }
          arr[i][j] = min(arr[i][j],sum);
          }
         
          }
        }
      }
    
  

  void funC()
  {

    int i = 0;
    int j = 0;

    scanf("%d%d", &i, &j);

    if (arr[i][j] == 0)
    {
      printf("-1\n");
    }
    printf("%d\n", arr[i][j]);
  }
