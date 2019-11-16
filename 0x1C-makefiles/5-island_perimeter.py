#!/usr/bin/python3


def island_perimeter(grid):

    wd = len(grid[0])
    ht = len(grid)
    per = 0

    for c in range(ht):
        for h in range(wd):
            if grid[c][h] == 0:
                if (h > 0 and grid[c][h - 1] == 1):
                    per += 1
                if (c > 0 and grid[c - 1][h] == 1):
                    per += 1
                if (h < wd - 1 and grid[c][h + 1] == 1):
                    per += 1
                if (c < ht - 1 and grid[c + 1][h] == 1):
                    per += 1
    return per
