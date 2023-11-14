# Function to reverse the string from a given position
def reverse_string_from_position(position, s):
    # Split the string into two parts - before and after the position
    part1 = s[:position]
    part2 = s[position:]

    # Reverse the second part
    reversed_part1 = part1[::-1]

    # Concatenate the reversed second part with the first part
    reversed_string = reversed_part1 + part2

    return reversed_string

# Function to process each test case
def process_test_case():
    # Input the position
    position = int(input())

    # Input the string
    s = input()

    # Reverse the string from the given position
    result = reverse_string_from_position(position, s)

    # Output the result
    print(result)

# Input the number of test cases
T = int(input())

# Process each test case
for _ in range(T):
    process_test_case()
