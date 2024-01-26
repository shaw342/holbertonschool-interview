#include "slide_line.h"

/**
 * slide_line - Slide and merge an array of integers in the given direction.
 *
 * @line: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @direction: SLIDE_LEFT or SLIDE_RIGHT.
 *
 * Return: 1 upon success, 0 upon failure.
 */
int slide_line(int *line, size_t size, int direction)
{
    size_t i, j;

    if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
        return 0;

    if (direction == SLIDE_LEFT)
    {
        for (i = 0, j = 0; i < size; i++)
        {
            if (line[i] != 0)
            {
                if (j != i)
                {
                    line[j] = line[i];
                    line[i] = 0;
                }
                j++;
            }
        }

        for (i = 0; i < size - 1; i++)
        {
            if (line[i] == line[i + 1])
            {
                line[i] *= 2;
                line[i + 1] = 0;
            }
        }

        for (i = 0, j = 0; i < size; i++)
        {
            if (line[i] != 0)
            {
                if (j != i)
                {
                    line[j] = line[i];
                    line[i] = 0;
                }
                j++;
            }
        }
    }
    else
    {
        for (i = size - 1, j = size - 1; j < size; i--)
        {
            if (line[i] != 0)
            {
                if (j != i)
                {
                    line[j] = line[i];
                    line[i] = 0;
                }
                j--;
            }
            if (i == 0)
            {
                break;
            }
        }

        for (i = size - 1; i > 0; i--)
        {
            if (line[i] == line[i - 1])
            {
                line[i] *= 2;
                line[i - 1] = 0;
            }
        }

        for (i = size - 1, j = size - 1; j < size; i--)
        {
            if (line[i] != 0)
            {
                if (j != i)
                {
                    line[j] = line[i];
                    line[i] = 0;
                }
                j--;
            }
            if (i == 0)
            {
                break;
            }
        }
    }

    return 1;
}