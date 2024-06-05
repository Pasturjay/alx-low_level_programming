#!/usr/bin/python3
"""
Module for island_perimeter()
"""

def island_perimeter(grid):
    """
    Provides the results of the length of an island perimeter
    """
    perimeter = 0
    for row_index, row in enumerate(grid):
        for col_index, cell in enumerate(row):
            if cell == 1:
                if row_index == 0 or grid[row_index - 1][col_index] == 0:
                    perimeter += 1
                if row_index == len(grid) - 1 or grid[row_index + 1][col_index] == 0:
                    perimeter += 1
                if col_index == 0 or grid[row_index][col_index - 1] == 0:
                    perimeter += 1
                if col_index == len(row) - 1 or grid[row_index][col_index + 1] == 0:
                    perimeter += 1
    return perimeter

