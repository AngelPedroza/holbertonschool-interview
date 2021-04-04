def pascal_triangle(n):
    if n <= 0:
        return []

    big = []
    for number in range(n):
        a = [int(i) for i in str(11**number)]
        big.append(a)

    return big
