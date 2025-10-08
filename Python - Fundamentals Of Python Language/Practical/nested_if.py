age = int(input("Enter your age: "))

# Nested if condition
if age >= 18:
    weight = float(input("Enter your weight (in kg): "))
    if weight >= 50:
        print("You are eligible to donate blood.")
    else:
        print("You are not eligible to donate blood because your weight is below 50 kg.")
else:
    print("You are not eligible to donate blood because your age is below 18.")
