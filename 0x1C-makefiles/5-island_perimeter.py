#!/usr/bin/python3

def island_perimeter(grid):
    """this calculates the perimeter(edges) of a grid"""
    border_val = []
    count = 0
    total_prm = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                border_val = [grid[row-1][col], grid[row+1][col], grid[row][col-1], grid[row][col+1]]
                for i in border_val:
                    if i == 0:
                        count += 1
        total_prm += count
        count = 0
    return total_prm

