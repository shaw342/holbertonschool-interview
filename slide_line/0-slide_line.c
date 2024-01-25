#include <stdio.h>
#include "slide_line.h"
#include <stdint.h>
void slide_right(int *line, size_t size);
void slide_left(int *line, size_t size);

int slide_line(int *line, size_t size, int direction)
{
	if (direction == SLIDE_LEFT)
	{
		slide_left(line,size);

		return 1;
	}

	if (direction == SLIDE_RIGHT)
	{
		slide_right(line,size);
		return 1;
	}

	return 0;
}

void slide_left(int *line, size_t size)
{
	for (size_t i = 0 ; i < size ;i++)
	{
		for (size_t j = 1; j < size ;j++)
		{
			if (line[i] == line[j])
			{
				line[i] += line[j];
				line[j] = 0;
			}
		}
	}
}

void slide_right(int *line, size_t size)
{
	for (size_t i = size - 1; i > 0 ; i--)
	{
		for (size_t j = size - 2; j > 0 ;j -= 2)
		{
			if (line[i] == line[j])
			{
				line[i] += line[j];
				line[j] = 0;
			}
		}
	} 
}
