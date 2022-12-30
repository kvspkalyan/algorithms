#include<stdio.h>

int graph[10][10], visited[10], n, cost = 0;

int input_graph (int n)
{
  int i, j;
  for (i = 0; i < n; i++)
    {
      printf ("\nEnter Elements of Row: %d\n", i + 1);

      for (j = 0; j < n; j++)
      {
	    scanf ("%d", &graph[i][j]);
      }
    }
     for (i = 0; i < n; i++)
    {

      for (j = 0; j < n; j++)
      {
	    printf ("%d", graph[i][j]);
      }
      visited[i]=0;
    }
    
}

int least (int city)
  {
    int i;
    int min = 999, p;

    for (i = 0; i < n; i++)
      {
	if ((graph[city][i] != 0) && (visited[i] == 0))
	  if (graph[city][i] + graph[i][city] < min)
	    {
	      min = graph[i][0] + graph[city][i];
	      p = i;
	    }
      }

    if (min != 999)
    {
      cost += min;
    }
    return p;
  }


  int mincost (int city)
  {
    int i, ncity;

    visited[city] = 1;

    printf ("%d--->", city + 1);
    ncity = least (city);

    if (ncity == 999)
      {
	ncity = 0;
	printf ("%d", ncity + 1);
	cost += graph[city][ncity];

	return cost;
      }

    mincost (ncity);
  }

  
  int main ()
  {
    int n;
    scanf("%d",&n);  
    input_graph (n);
    printf ("\n\nThe Path is:\n");
    mincost (0);
    printf ("\n\nMinimum cost is %d\n ", cost);
    return 0;
  }
