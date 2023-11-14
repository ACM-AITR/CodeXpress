# Function to find the maximum number of gifts Shivaay can buy
def max_gifts(m, x, gifts):
    # Sort the array of gift prices in ascending order
    gifts.sort()

    # Initialize variables
    total_cost = 0
    num_gifts = 0

    # Iterate through the sorted array and buy gifts until the budget is exhausted
    for cost in gifts:
        total_cost += cost
        if total_cost <= x:
            num_gifts += 1
        else:
            break

    return num_gifts

# Function to process each test case
def process_test_case():
    # Input the number of elements in array and budget
    m, x = map(int, input().split())

    # Input the array of gift prices
    gifts = list(map(int, input().split()))

    # Find and output the maximum number of gifts Shivaay can buy
    result = max_gifts(m, x, gifts)
    print(result)

# Input the number of test cases
T = int(input())

# Process each test case
for _ in range(T):
    process_test_case()
