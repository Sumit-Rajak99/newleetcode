def base(b, p):
    result = 1

    for i in range(p):
        result = result * b

    return result

print(base(4, 2))