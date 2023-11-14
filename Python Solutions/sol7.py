# Function to separate Diwali greetings into individual wishes
def separate_diwali_wishes(s):
    ans = []
    temp = ""

    for char in s:
        if ('a' <= char <= 'z') or ('A' <= char <= 'Z'):
            temp += char
        else:
            if temp != "":
                ans.append(temp)
                temp = ""
            continue

    if temp != "":
        ans.append(temp)

    return ans

# Function to process each test case
def process_test_case():
    # Input the number of test cases
    t = int(input())

    # Process each test case
    for _ in range(t):
        # Input the greetings string
        s = input().strip()

        # Separate Diwali wishes
        wishes = separate_diwali_wishes(s)

        # Output the individual wishes
        for wish in wishes:
            print(wish)

# Process each test case
process_test_case()
