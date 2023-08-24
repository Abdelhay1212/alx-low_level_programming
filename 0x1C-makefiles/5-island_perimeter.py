#!/usr/bin/python3
'''Module defines the island_perimeter'''


def island_perimeter(grid):
    '''Calculated the perimeter of island'''
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                count += 1
    if count != 0:
        perimeter = count * 2 + 2
    else:
        perimeter = 0
    return perimeter
