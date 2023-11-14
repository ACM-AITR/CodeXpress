from math import gcd

# Function to find the auspicious number with the maximum luckiness score
def max_luckiness_score(N, M, L, A):
    # Calculate the luckiness score for each auspicious number
    luckiness_scores = [0] * M
    
    for i in range(M):
        for j in range(N):
            if L[j] % A[i] == 0:
                luckiness_scores[i] += 1
    
    # Find the auspicious number with the maximum luckiness score
    max_score = max(luckiness_scores)
    max_score_auspicious_numbers = [A[i] for i in range(M) if luckiness_scores[i] == max_score]
    
    # If there are multiple auspicious numbers with the maximum score, return the minimum of them
    return min(max_score_auspicious_numbers)

# Function to process each test case
def process_test_case():
    # Input N and M
    N, M = map(int, input().split())

    # Input array L
    L = list(map(int, input().split()))

    # Input array A
    A = list(map(int, input().split()))

    # Find and output the auspicious number with the maximum luckiness score
    result = max_luckiness_score(N, M, L, A)
    print(result)

# Input the number of test cases
T = int(input())

# Process each test case
for _ in range(T):
    process_test_case()