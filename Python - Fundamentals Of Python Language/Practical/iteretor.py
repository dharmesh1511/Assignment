# Iterators in Python


d="Dharmesh"
dk=iter(d)

print(next(dk))
# print(next(dk))
# print(next(dk))
# print(next(dk))
# print(next(dk))
# print(next(dk))
# print(next(dk))

# Creating an iterator
# Creating a custom iterator in Python involves defining a class that implements 
# the __iter__() and __next__() methods according to the Python iterator protocol.

# Define the Class: Start by defining a class that will act as the iterator.
# Initialize Attributes: In the __init__() method of the class, initialize any 
# required attributes that will be used throughout the iteration process.
# Implement __iter__(): This method should return the iterator object itself. 
# This is usually as simple as returning self.
# Implement __next__(): This method should provide the next item in the sequence 
# each time it’s called.

# Below is an example of a custom class called EvenNumbers, which iterates through even numbers 
# starting from 2:

class EvenNumber:
    def __iter__(self):
        self.n=2
        return self
    
    def __next__(self):
        x=self.n
        self.n+=2
        return x

even=EvenNumber()
dk=iter(even)
print(next(dk))




