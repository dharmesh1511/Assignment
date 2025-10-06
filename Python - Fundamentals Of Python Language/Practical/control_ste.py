# for i in range(1,6):
#     pass

# break statment
# for i in range(1,8):
#     if i==4:
#         break
#     print(i)

# continue statment
# for i in range(1,8):
#     if i==4:
#         continue
#     print(i)

# i=0
# while True:
#     if i==5:
#         break
#     print(i)
#     i+=1

# guss=5
# num=int(input("Enter your number::"))
# if num == guss:
#     print("You win!!")
# else:
#     if num > guss:
#         print("Very high")
#     else:
#         print("Very low")

# guss=5
# while True:
#     num=int(input("Enter your number::"))
#     if num == guss:
#         print("You win!!")
#         break
#     else:
#         if num > guss:
#             print("Very high")
#         else:
#             print("Very low")

# guss=5
# count=1
# while True:
#     num=int(input("Enter your number::"))
#     if num == guss:
#         print("You win!!")
#         print(f"Your gussing time is::{count}")
#         break
#     else:
#         count+=1
#         if num > guss:
#             print("Very high")
#         else:
#             print("very low")

# import random
# guss=random.randint(1,10)
# # print(guss)
# count=1
# while True:
#     num=int(input("Enter your number::"))
#     count+=1
#     if num == guss:
#         print("You win!!")
#         print(f"Your gussing time is {count}")
#         break
#     else:
#         if num > guss:
#             print("Very high")
#         else:
#             print("Very low")

# for i in range(1,6):
#     for j in range(1,6):
#         print(f"i : {i} j : {j}")
#     print()

# for i in range(1,6):
#     for j in range(1,6):
#         print(f"*",end="")
#     print()

# for i in range(1,6):
#     for j in range(1,i+1):
#         print(f"*",end="")
#     print()

# for i in range(1,6):
#     print(" * "* i)