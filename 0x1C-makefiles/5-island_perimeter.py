#!/usr/bin/python3
"""5. Island Perimeter"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid

    Args:
        grid (list): a list of lists

    Returns:
        int: the perimeter of the island
    """
    perim = 0
    gridLen = len(grid)

    if grid != []:
        rowLen = len(grid[0])

    for i in range(gridLen):
        for j in range(rowLen):
            if grid[i][j] == 1:
                if (j - 1) == -1 or grid[i][j - 1] == 0:
                    perim += 1

                if (j + 1) == rowLen or grid[i][j + 1] == 0:
                    perim += 1

                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    perim += 1

                if (i + 1) == gridLen or grid[i + 1][j] == 0:
                    perim += 1

    return perim
