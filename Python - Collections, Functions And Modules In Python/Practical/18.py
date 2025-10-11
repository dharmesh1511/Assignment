import random

# Generate a random integer between 1 and 10
rand_int = random.randint(1, 10)
print("Random integer between 1 and 10:", rand_int)

# Generate a random floating-point number between 0 and 1
rand_float = random.random()
print("Random float between 0 and 1:", rand_float)

# Generate a random number from a list
my_list = [10, 20, 30, 40, 50]
rand_choice = random.choice(my_list)
print("Random choice from list:", rand_choice)
