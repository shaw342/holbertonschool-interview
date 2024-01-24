#include <stdio.h>
#include <stdlib.h>
void topple(int grid[3][3]);
int isStable(int grid[3][3]);
void print_grid(int grid[3][3]);


void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{

	for (int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
		{
			grid1[i][j] += grid2[i][j];
		}
	}

	while (!isStable(grid1))
	{
		print_grid(grid1);
		topple(grid1);
	}
}

void topple(int grid1[3][3])
{
	int grid[3][3];

	for (int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
		{
			grid[i][j] = 0;
		}
	}
	for (int i = 0; i < 3 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
		{
			if (grid1[i][j] > 3)
			{
				grid[i][j] -= 4;

				if (i - 1 >= 0)
				{
					grid[i - 1][j]++;
				}
				if (i + 1 < 3)
				{
					grid[i + 1][j]++;
				}

				if (j - 1 >= 0)
				{
					grid[i][j - 1]++;
				}

				if (j + 1 < 3)
				{
					grid[i][j + 1]++;
				}
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			grid1[i][j] += grid[i][j];
		}
	}
}

int isStable(int grid[3][3])
{
	int i;
	int j;

	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			if (grid[i][j] > 3)
			{
				return (0);
			}
		}
	}
	return (1);
}

void print_grid(int grid[3][3])
{
	int i, j;

	printf("=\n");
	for (i = 0 ; i < 3; i++)
	{
		for (j = 0 ; j < 3; j++)
		{
			if (j){
				printf(" ");
			}
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

