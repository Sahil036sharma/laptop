#*********** week 3 *********

input_numbers = input()
numbers_list = input_numbers.split()
for i in range(len(numbers_list)):
    numbers_list[i] = int(numbers_list[i])
# Initialize the two largest numbers to negative infinity
first_largest = -1
second_largest = -1
for number in numbers_list:
    if number > first_largest:
        second_largest = first_largest
        first_largest = number
    elif number > second_largest and number != first_largest:
        second_largest = number

print(second_largest)




input_num=input("Enter number:")
num=input_num.split()

for i in range(len(num)):
    num[i]=int(num[i])
    
uni_num=[]
for number in num:
    if number not in uni_num:
        uni_num.append(number)
for number in uni_num:
    print(number)


input_numbers = input()
numbers_list = input_numbers.split()
for i in range(len(numbers_list)):
    numbers_list[i] = int(numbers_list[i])

reversed_list = numbers_list[::-1]

new_list = []
for i in range(len(numbers_list)):
    if i % 2 == 0:
        new_list.append(numbers_list[i])
    else:
        new_value = numbers_list[i] + reversed_list[i]
        new_list.append(new_value)

for i in new_list:
    print(i, end=" ")



#*********** week 4 *********
flag = 0

row = int(input("Enter number of rows: "))
col = int(input("Enter number of columns: "))

mat = []
for i in range(row):
    temp = list(map(int, input().split()))
    mat.append(temp)

for i in range(row):
    row_min = min(mat[i])
    col_index = mat[i].index(row_min)

    is_saddle_point = True

    for j in range(row):
        if mat[j][col_index] > row_min:
            is_saddle_point = False
            break

    if is_saddle_point:
        flag = 1
        break

print(flag, end=" ")


r = int(input())
c = int(input())

matrix = []
for i in range(r):
    matrix.append(list(map(int, input().split())))

s = int(input())

transpose_matrix = []
for i in range(c):
    transpose_row = []
    for j in range(r):
        transpose_row.append(matrix[j][i])
    transpose_matrix.append(transpose_row)

result_matrix = []
for i in range(c):
    result_row = []
    for j in range(r):
        result_row.append(transpose_matrix[i][j] * s)
    result_matrix.append(result_row)

for row in result_matrix:
    print(' '.join(map(str, row)))



r = int(input())

matrix = []
for i in range(r):
    matrix.append(list(map(int, input().split())))

is_skew_symmetric = True

for i in range(r):
    for j in range(r):
        if matrix[i][j] != -matrix[j][i]:
            is_skew_symmetric = False
            break
    if not is_skew_symmetric:
        break

print(1 if is_skew_symmetric else 0)
  
    
#*********** week 5*********
def binary_search(arr, target):
    left = 0
    right = len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    
    return -1

sorted_list = list(map(int, input().split()))
target_number = int(input())

result_index = binary_search(sorted_list, target_number)

print(result_index, end=" ")




def merge_sorted_lists(list1, list2):
    merged_list = []
    i, j = 0, 0
    
    while i < len(list1) and j < len(list2):
        if list1[i] < list2[j]:
            merged_list.append(list1[i])
            i += 1
        else:
            merged_list.append(list2[j])
            j += 1
    
    while i < len(list1):
        merged_list.append(list1[i])
        i += 1
    
    while j < len(list2):
        merged_list.append(list2[j])
        j += 1
    
    return merged_list

list1 = list(map(int, input().split()))
list2 = list(map(int, input().split()))

result = merge_sorted_lists(list1, list2)

print(result)



def find_kth_elements(arr, k):
    arr.sort()
    
    n = len(arr)
    
    kth_smallest = arr[k - 1]
    kth_largest = arr[-k]
    
    if kth_smallest == kth_largest:
        middle_index = (n - 1) // 2
        if (k == middle_index + 1) or (k == n - middle_index):
            return 1
        else:
            return -1
    else:
        return 0

arr = list(map(int, input().split()))
k = int(input())

result = find_kth_elements(arr, k)
print(result)



#********week  6******************

def recursive_multiply(a, b):
    if b == 0:
        return 0
    if b == 1:
        return a
    return a + recursive_multiply(a, b - 1)

a, b = map(int, input().split())
print(recursive_multiply(a, b), end=" ")


def recursive_log2(x):
    if x == 1:
        return 0
    return 1 + recursive_log2(x // 2)

x = int(input())
result = recursive_log2(x)
print(result, end=" ")



def non_decreasing(L):
    if len(L) <= 1:
        return True
    return L[0] <= L[1] and non_decreasing(L[1:])

L = list(map(int, input().split()))
result = non_decreasing(L)
print(result, end=" ")


#*******week 7 ****************

def move_player(ladders, snakes, current_position, die_roll):
    new_position = current_position + die_roll
    if new_position in ladders:
        return 1
    elif new_position in snakes:
        return -1
    else:
        return 0

ladders = list(map(int, input().split()))
snakes = list(map(int, input().split()))
current_position = int(input())
die_roll = int(input())
print(move_player(ladders, snakes, current_position, die_roll), end=" ")


def is_palindrome(s):
    if len(s) <= 1:
        return 1
    if s[0] != s[-1]:
        return 0
    return is_palindrome(s[1:-1])

s = input()
print(is_palindrome(s))



def is_binary(matrix):
    for row in matrix:
        for element in row:
            if element != 0 and element != 1:
                return False
    return True

def is_symmetric(matrix):
    r = len(matrix)
    c = len(matrix[0])
    for i in range(r):
        for j in range(c):
            if matrix[i][j] != matrix[j][i]:
                return False
    return True

r = int(input())
c = int(input())
matrix = []
for _ in range(r):
    row = list(map(int, input().split()))
    matrix.append(row)

binary = is_binary(matrix)
symmetric = is_symmetric(matrix)

if binary and symmetric:
    print("11")
elif binary and not symmetric:
    print("10")
elif not binary and symmetric:
    print("01")
else:
    print("00")



#*********** week 8 *********

def sum_first_elements(n, tuples):
    sum_first = 0
    
    for t in tuples:
        sum_first += t[0]
    
    return sum_first

n = int(input())
tuples = [tuple(map(int, input().split())) for _ in range(n)]
  
print(sum_first_elements(n, tuples))



import re

def are_anagrams(str1, str2):
    clean_str1 = re.sub(r'[^a-zA-Z]', '', str1).lower()
    clean_str2 = re.sub(r'[^a-zA-Z]', '', str2).lower()
    
    if sorted(clean_str1) == sorted(clean_str2):
        return 1
    else:
        return 0

str1 = input().strip()
str2 = input().strip()

print(are_anagrams(str1, str2))



def max_after_multiplication(numbers, k):
    multiplied_numbers = [num * k for num in numbers]
    return max(multiplied_numbers)

numbers = list(map(int, input().split()))  
k = int(input())  

print(max_after_multiplication(numbers, k))



#**** week 9 *********

def count_vowels(input_str):
    vowels = "aeiouAEIOU"
    count = 0
    
    for char in input_str:
        if char in vowels:
            count += 1  
            
    return count

input_str = input()
output = count_vowels(input_str)
print(output)


def count_vowels(input_str):
    vowels = "aeiouAEIOU"
    count = 0
    
    for char in input_str:
        if char in vowels:
            count += 1  
            
    return count

input_str = input()
output = count_vowels(input_str)
print(output)


def total_edges_in_complete_graph(n):
    return (n * (n - 1)) // 2

n = int(input())
output = total_edges_in_complete_graph(n)
print(output)



# **** week 10 *********

def analyze_sequence(sequence):
    numbers = list(map(int, sequence.split()))
    n = len(numbers)

    left_sum = sum(numbers[:n // 2])
    right_sum = sum(numbers[n // 2:])

    if left_sum > right_sum:
        print(-1)
    elif right_sum > left_sum:
        print(1)
    else:
        print(0)

sequence = input()
analyze_sequence(sequence)


numbers = input().split()

long_tail_count = 0

for num in numbers:
    before, after = num.split(".")
    if len(after) > len(before):
        long_tail_count += 1

print(long_tail_count)



para = input().strip()
n = int(input().strip())

words = para.split()

word_count = {}

for word in words:
    if word in word_count:
        word_count[word] += 1
    else:
        word_count[word] = 1

if n in word_count.values():
    print(1)
else:
    print(0)


#***** week 11 **********

def convert_date(date_str):
    month, day, year = date_str.split('/')
    year = year[-2:]
    return f"{day}-{month}-{year}"

date_str = input()
print(convert_date(date_str))


import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def find_gcd_of_list(numbers):
    result = numbers[0]
    for num in numbers[1:]:
        result = gcd(result, num)
    return result

def find_common_factors(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

input_data = input()
numbers = list(map(int, input_data.split(':')))
gcd_value = find_gcd_of_list(numbers)
common_factors = find_common_factors(gcd_value)
print(" ".join(map(str, common_factors)))


mapping = {'a': '0', 'k': '1', 'x': '2', 
           'y': '3', 's': '4', 'm': '5',
           'b': '6', 'd': '7', 'p': '8', 
           'z': '9'}
encoded_date = input().strip()
decoded_dates = ''.join(mapping[c] if c in mapping else c for c in encoded_date)
print(decoded_dates, end="")


#*** week 12 *********


def collatz(n):
    if n == 1:
        return 0
    elif n % 2 == 0:
        return 1 + collatz(n // 2)
    else:
        return 1 + collatz(3 * n + 1)

n = int(input())
print(collatz(n))


def simulate(n):
    happy = n
    sad = 0

    for _ in range(3):
        new_happy = 0.30 * happy + 0.50 * sad
        new_sad = 0.70 * happy + 0.50 * sad
        happy = new_happy
        sad = new_sad

    return int(happy), int(sad)

n = int(input())
happy, sad = simulate(n)
print(happy, sad)



