# Generator Function in Python
# A generator function is a special type of function that returns an iterator object.
# Instead of using return to send back a single value, generator functions use yield 
# to produce a series of results over time. This allows the function to generate 
# values and pause its execution after each yield, maintaining its state between 
# iterations.

# def fun(max):
#     cnt=1
#     while cnt<=max:
#         yield cnt
#         cnt+=1
# dk=fun(10)
# print(fun(5))
# print(next(dk))
# print(next(dk))
# print(next(dk))
# print(next(dk))
# print(next(dk))
# print(next(dk))
# print(next(dk))
# print(next(dk))
# print(next(dk))
# print(next(dk))


# for n in dk:
#     print(n)

# Create a Generator in Python
# Creating a generator in Python is as simple as defining a function with at least 
# one yield statement. When called, this function doesn’t return a single value; instead,
# it returns a generator object that supports the iterator protocol. The generator has the following syntax
# in Python:

# def generator_function_name(parameters):
#     # your code hear
#     yield experession
#     Additional code can follow

# A generator function that yields 1 for first time,
# 2 second time and 3 third time

# def fun():
#     yield 1
#     yield 2
#     yield 3
# dk=fun()

# # # # Driver code to check above generator function
# for val in dk:
    # print(val)

# Yield vs Return
# yield is used in generator functions to provide a sequence of values over time.
# When yield is executed, it pauses the function, returns the current value and retains the state of the function.
# This allows the function to continue from the same point when called again, making it ideal for generating large 
# or complex sequences efficiently.

# return, on the other hand, is used to exit a function and return a final value. Once return is executed, 
# the function is terminated immediately, and no state is retained. This is suitable for cases where a single 
# result is needed from a function.

# def sum():
#     return 1+2+3
# print(sum())

def dk():
    yield 1
    yield 2
    yield 3
lakum=dk()
print(next(lakum))
print(next(lakum))
print(next(lakum))
