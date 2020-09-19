#!/usr/bin/python3
"""Call this function to find and utf-8 character"""


def validUTF8(data):
    """
    Say if an number is a valid UTF-8
    """
    for i in data:
        bin = '{0:08b}'.format(i)
        if len(bin) > 8:
            return False

    return True
