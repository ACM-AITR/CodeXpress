# Function to find the index of the house where sweets can be equally divided
def find_house_index(arr):
    total_sum = sum(arr)
    left_sum = 0

    for i in range(len(arr)):
        total_sum -= arr[i]

        if left_sum == total_sum:
            return i
        left_sum += arr[i]

    return -1

# Function to process each test case
def process_test_case():
    # Input the number of elements in the array
    n = int(input())

    # Input the array arr
    arr = list(map(int, input().split()))

    # Find and output the index of the house where sweets can be equally divided
    result = find_house_index(arr)
    print(result)

# Input the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    process_test_case()
