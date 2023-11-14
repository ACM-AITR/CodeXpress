# Function to calculate the number of friends who didn't get sweets
def friends_without_sweets(d, k, l, m, n):
    # Initialize a set to store friends who got sweets
    friends_with_sweets = set()

    # Iterate through friends and apply the given conditions
    for i in range(1, d + 1):
        # Check if the friend should not get sweets based on conditions
        if i % k == 0 or i % l == 0 or i % m == 0 or i % n == 0:
            continue
        else:
            # Add the friend to the set if they didn't get sweets
            friends_with_sweets.add(i)

    # Calculate the number of friends who didn't get sweets
    friends_without_sweets = d - len(friends_with_sweets)

    return friends_without_sweets

# Function to process each test case
def process_test_case():
    # Input the total number of friends
    d = int(input())

    # Input the values of k, l, m, n
    k, l, m, n = map(int, input().split())

    # Calculate and output the number of friends who didn't get sweets
    result = friends_without_sweets(d, k, l, m, n)
    print(result)

# Input the number of test cases
T = int(input())

# Process each test case
for _ in range(T):
    process_test_case()
