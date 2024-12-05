def pascal_triangle(n):
    T = []
    for i in range(n):
        l = [0] * (i + 1)
        for j in range(i+1):
            if j != 0 and j != i:
                l[j] =  T[i-1][j-1] + T[i-1][j]
            else:
                l[j] = 1
        T.append(l)
    return T