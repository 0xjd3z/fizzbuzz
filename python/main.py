

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

# def fizzbuzz1(n: int):
#     for i in range(1, n+1):
#         if i % 3 == 0:
#             print("Fizz")
#         if i % 5 == 0:
#             print("Buzz")
#         print(i)




fizzbuzz1(100)