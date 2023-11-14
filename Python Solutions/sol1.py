def check_lights_count(n, lights):
    even_count = 0
    odd_count = 0
    
    for light in lights:
        if light % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
    
    if even_count > odd_count:
        return "Yes"
    else:
        return "No"

T = int(input())

for _ in range(T):
    N = int(input())  
    L = list(map(int, input().split()))  
    
    result = check_lights_count(N, L)
    print(result)
