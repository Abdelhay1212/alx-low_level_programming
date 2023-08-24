#!/usr/bin/python3
'''Module defines the island_perimeter'''


def island_perimeter(grid):
    '''Calculated the perimeter of island'''
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if j == 1:
                count += 1
    perimeter = count * 2 + 2
    return perimeter
