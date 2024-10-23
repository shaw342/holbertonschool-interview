#!/usr/bin/python3
"""
make change file
"""


def makeChange(coins, total):
    """
    make change function that
    take coins and total parameter
    determine the fewest number of coins
    needed to meet a given amount total
    """
    coin_reverse = sorted(coins, reverse=True)
    count = 0

    if total <= 0:
        return 0

    for coin in coin_reverse:
        if total % coin <= total:
            count += total // coin
            total = total % coin

    return count if total == 0 else -1
