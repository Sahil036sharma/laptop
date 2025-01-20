# ***Take three integers as input and find the maximum and minimum out of them and print.**//

# a=int(input("Enter the first number:"))
# b=int(input("Enter the sec number:"))
# c=int(input("Enter the third number:"))

# if a>b and a>c or a<b and a<c :
#     print(f"The number{a} is greater than other")
    
# if b>c and b>a :
#     print(f"the number {b} is greater than other")
# else:
#     print(f"the number {c} is greater than other")
    

# if a < b and a < c:
#     print(f"The number {a} is the smallest.")
# elif b < a and b < c:
#     print(f"The number {b} is the smallest.")
# else:
#     print(f"The number {c} is the smallest.")



# *****Print if an integer is odd or even
# n = int(input("Enter the number:"))

# if n % 2 == 0:
#     print(f"The number {n} is even.")
# else:
#     print(f"The number {n} is odd.")



# Take two numbers and print their: Sum, Difference, Multiplication ,Division
# Integer Division, Print which number is bigger

# a=int(input("Enter the first number:"))
# b=int(input("Enter the sec number:"))

# sum=a+b
# print(f"Sum is :{sum}")

# diff=a-b
# print(f"the diff is :{diff}")

# multi =a*b
# print(f"the product of:{multi}")

# divi=a/b
# print(f"The division is: {divi}")

# divii=a//b
# print(f"The division is: {divii}")



# ****Print numbers from one to hundred
# n=0
# for n in range (1,101):
#     print(n)


# Print odd numbers only
# for n in range(1, 101):
#     if n % 2 != 0:
#         print(n)

# ****Take a list of numbers and print them without storing

# num_lists = int(input("Enter the number of lists: "))

# for i in range(num_lists):
#     numbers = input(f"Enter numbers for list {i + 1}, separated by spaces: ")
    
#     print(f"Elements of list {i + 1}:")
#     for number in numbers.split():
#      print(number)


# Input: Taking an integer from the user
# number = int(input("Enter an integer: "))
# # Converting the integer to a string and iterating over each character
# for digit in str(number):
#     print(digit)


# ****Remove char from str

# name = input("Enter your name: ")
# char = input("Enter char to be deleted: ")

# # Check if the character exists in the string
# if char in name:
#     # Remove the first occurrence of the character
#     index_of_char = name.index(char)
#     name = name[:index_of_char] + name[index_of_char + 1:]
#     print(f"After removing '{char}', your name is '{name}'")
# else:
#     print(f"The character '{char}' is not in the name.")


#*********** Use random function
# import random
# rand=random.random()
# if rand<0.33:
#     print("S")
# elif rand<0.66:
#     print("M")
# else:
#     print("K")


#******* Using list: find the higest and lowest element from a list of int taken from user
# l=[]
# num=int(input("Enter the element:"))
# for i in range(num):
#     ele=int(input("Give element:"))
#     l.append(ele)
# print(l)
# print(f"max:{max(l)}, min:{min(l)}")

#*****Continue example

# i=0
# while i<10:
#     i+=1
#     if i==5:
#         print("skip")
#         continue
#     print(i)



#**Binary conversion:
# a=12
# while a//2>2:
#     print(a%2)
#     a=a//2
# print(a%2)
# print(a//2)



#*****Guess and check:
# import random

# for i in range(1,101):
#     guess=random.randint(1,100)
#     print("Guess:",guess)
    
#     inp=input("correct guess ? (y/n):")
#     if inp=='y' or inp =='Y':
#         print("find the ",i)
#         break
# else:
#     print("not found")


#******** analysis the quetions in  using for loop
# medal_data={
#     "Asia":{
#         "china":{"gold":40,"silver":78,"bronze":45},
#         "india":{"gold":25,"silver":68,"bronze":86},
#         "japan":{"gold":54,"silver":70,"bronze":85},
#     },
    
#     "Eroupe":{
#         "uk":{"gold":50,"silver":98,"bronze":45},
#         "germany":{"gold":5,"silver":25,"bronze":52},
#         "russia":{"gold":56,"silver":20,"bronze":90},
#     },
    
#     "Africa":{
#         "kenya":{"gold":85,"silver":10,"bronze":40},
#         "South africa":{"gold":29,"silver":60,"bronze":90},
#         "ethiopia":{"gold":96,"silver":20,"bronze":55},
#     }
# }

# for cont,re in medal_data.items():
#     for country,medals in re.items():
#         if medals['gold']>=10:
#             print(cont,country,medals)


# max=0
# max_country=None
# for cont,re in medal_data.items():
#     for country,medals in re.items():
#         num=sum(medals.values())
#         if max<num:
#             max=num
#             max_country=country
# print(max_country,max)

# germany_gold=medal_data['Eroupe']['germany']['gold']
# for cont,re in medal_data.items():
#     for country,medals in re.items():
#         if medals['gold']>germany_gold:
#             print(country,medals['gold'])
            
            
# sum=0
# count=0

# for country,medals in medal_data["Asia"].items():
#     for medal_type,medal_count in medals.items():
#         sum+=medal_count
#     count+=1
# avg=sum/count
# print(avg)


#****normal python function:
# def all_odd(limit):
#     odds=[]
#     for i in range(limit):
#         if i%2==1:
#             odds.append(i)
#     return odds

# odds=all_odd(100)
# print(odds)


# n= int(input("Enter the number:"))

# program of the factorial number in this que
# def fact(n):
#     multi=1
#     for i in range(1,n+1):
#         multi*=i
#     print(multi)

# fact(n)


#***program of the fabonnaci number

# def fact(n):
#     if n==0 or n==1:
#       print("1")
#       return 1

#     else:
#      print(f"{n}*fact({n-1})")
#      return n*fact(n-1)

# fact(n)



