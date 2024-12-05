#!/usr/bin/python3
"""
    module pascal_triangle
"""


def pascal_triangle(n):
    """
        function take n integer
        return the list of pascal_triangle
    """

    T = []

    for i in range(n):
        L = [0] * (i + 1)
        for j in range(i+1):
            if j != 0 and j != i:
                L[j] = T[i-1][j-1] + T[i-1][j]
            else:
                L[j] = 1
        T.append(L)
    return T
