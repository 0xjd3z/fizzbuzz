

# naive approach
def fizzbuzz(n: int):
    for i in range(1, n+1):
        if i % 15 == 0:
            print("fizzbuzz")
        elif i % 3 == 0:
            print("fizz")
        elif i % 5 == 0:
            print("buzz")
        else:
            print(i)


# def fizzbuzz(n: int):
#     for i in range(1,100):
#         output = ""      
#         if i % 3 == 0:
#             output += "Fizz"
#         if i % 5 == 0:
#             output += "Buzz"
#         if output == "":
#             output = i

#     print(output)

fizzbuzz(100)