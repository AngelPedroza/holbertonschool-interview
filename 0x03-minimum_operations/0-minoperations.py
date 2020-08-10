#!/usr/bin/python3
""" Initialize the file """


def minOperations(n):
    """
    Function to return the minimum operations
    neccesary to copy and paste n times
    """

    if not n or n < 2:
        return 0

    mov = 0
    min_op = 2
    while min_op <= n:
        if n % min_op == 0:
            mov += min_op
            n = n // min_op
        else:
            min_op += 1

    return mov
