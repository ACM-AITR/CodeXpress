import math

# Function to calculate Euclidean distance from the origin
def euclidean_distance(x, y):
    return math.sqrt(x**2 + y**2)

# Function to process each test case
def process_test_case():
    # Input initial coordinates (x, y)
    x, y = map(int, input().split())

    # Input the string of instructions
    s = input()

    # Initialize variables for final coordinates
    final_x, final_y = x, y

    # Iterate through the instructions
    i = 0
    while i < len(s):
        direction = s[i]
        i += 1

        # Extract the distance value
        distance_str = ""
        while i < len(s) and s[i].isdigit():
            distance_str += s[i]
            i += 1

        # Convert distance to an integer
        distance = int(distance_str) if distance_str else 1

        # Update final coordinates based on the direction and distance
        if direction == 'N':
            final_y += distance
        elif direction == 'S':
            final_y -= distance
        elif direction == 'E':
            final_x += distance
        elif direction == 'W':
            final_x -= distance

    # Calculate and output the Euclidean distance from the origin
    result = euclidean_distance(final_x, final_y)
    print(f"{result:.2f}")

# Input the number of test cases
T = int(input())

# Process each test case
for _ in range(T):
    process_test_case()
