#!/usr/bin/python3
"""
 returns the perimeter of the island described in grid:

grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100

"""


def island_perimeter(grid):
    total_peri = 0
    for x, row in enumerate(grid):
        for y, element in enumerate(row):
            if element == 1:
                peri = 4
                # check bottom upto second last row
                if grid[x+1][y] == 1 and x < (len(grid)-1):
                    peri = peri - 1
                # check right upto second last column
                if grid[x][y+1] == 1 and y < (len(grid)-1):
                    peri = peri - 1
                
                # check top upto second last row
                if grid[x-1][y] == 1 and x > 0:
                    peri = peri - 1
                # check left upto second last column
                if grid[x][y-1] == 1 and y > 0:
                    peri = peri - 1
                              
                total_peri = peri + total_peri
    print(total_peri)

