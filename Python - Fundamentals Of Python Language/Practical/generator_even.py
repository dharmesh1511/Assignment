def even_number():
    num=2
    count=1
    while count <11:
        yield num
        num +=2
        count +=1
for even in even_number():
    print(even)