#!/usr/bin/python3
"""
0-pascal_triangle
"""
#
# def factorial(n):
#     """Generate the factorial of a number"""
#     fact = 1
#
#     for i in range(1, n+1):
#         fact = fact * i
#
#     return fact
#
#
# def combination(n, r):
#     """Get the value by the position in the triangle"""
#     a = factorial(n) / (factorial(r) * factorial(n - r))
#     return int(a)
# def pascal_triangle(n):
#     """Create the pascal triangle"""
#     if n <= 0:
#         return []
#
#     result = []
#     for count in range(n):
#         row = []
#         for element in range(count + 1):
#             row.append(combination(count, element))
#         result.append(row)
#
#     return result


def pascal_triangle(n):
    """Computes N rows of Pascal's Triangle"""
    pascal = [[1]]
    for _ in range(n - 1):
        pascal += [[1] + [pascal[-1][i] + pascal[-1][i + 1]
                   for i in range(len(pascal[-1]) - 1)] + [1]]
    return pascal if n > 0 else []
