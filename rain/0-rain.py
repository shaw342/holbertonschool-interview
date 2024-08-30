#!/usr/bin/python3
def rain(walls):
    width :int = 0
    height :int = 0
    square_water :int = 0

    for i in range(len(walls)-1):
        if walls[i] > 0:
            for y in range(i+1,len(walls)):
                if walls[y] > 0:
                    height = minimum(walls[i],walls[y])
                    square_water += height * width
                    height = 0
                    width = 0
                    i = y
                    break
                width +=1
    return square_water


def minimum(a,b):
    if a <= b:
        return a
    else:
        return b
