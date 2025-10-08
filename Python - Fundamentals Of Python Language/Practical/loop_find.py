# Program to find a specific string in a list

List1 = ['apple', 'banana', 'mango']
search_item = input("Enter the fruit to search: ")

lakum = False  # Flag to check if the fruit is found

for fruit in List1:
    if fruit == search_item:
        print(search_item, "is found in the list.")
        lakum = True
        break

if not lakum:
    print(search_item, "is not found in the list.")
