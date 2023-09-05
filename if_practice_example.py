
# Input:
#   "What is your favorite animal?"
# Output:
#   One of the following:
#       "That's my favorite animal too!"
#       "That's one is not my favorite"

my_fave = "elephant"
their_fave = input("\nWhat is your favorite animal? ")

if my_fave == their_fave:
    print("That's my favorite animal too!")
elif my_fave == my_fave:
    print("That one is not my favorite.")

# Same as before, except now you can use .lower(), which
# means that you don't have to input "elephant" in order
# to get it right, you can input "Elephant", since lower
# will automatically convert the input to lower case.

my_fave = "elephant"
their_fave = input("\nWhat is your favorite animal? ").lower()

if my_fave == their_fave:
    print("That's my favorite animal too!")
elif my_fave == my_fave:
    print("That one is not my favorite.")

# Input:
#   "What is the first number?"
#   "What is the second number?"
# Output:
#   One of the following:
#       "The first number is greater"
#       "The first number is not greater"
#   One of the following:
#       "The numbers are equal"
#       "The number are not equal"
#   One of the following:
#       "The second number is greater"
#       "The second number is not greater"

first = input("What is the first number? ")
second = input("What is the second number? ")

if first > second:
    print("The first number is greater")
elif first <= second:
    print("The first number is not greater")

if first == second:
    print("The numbers are equal")
elif first != second:
    print("The numbers are not equal")

if second > first:
    print("The second number is greater")
elif second <= first:
    print("The second number is not greater")



'''
Alternate solution for this last one:
first = input("What is the first number? ")
second = input("What is the second number? ")
print("The first number is " + ("" if first > second else "not ") + "greater")
print("The numbers are " + ("" if first == second else "not ") + "equal")
print("The second number is " + ("" if second > first else "not ") + "greater")

'''