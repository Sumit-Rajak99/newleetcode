def add_sublist(nested_list, value):
    for i in nested_list:
        i.append(value)

    return nested_list


nested_list = [['apple', 'banana'], ['cherry', 'date']]

result = add_sublist(nested_list, 'elderberry')

print("Modified List:", result)