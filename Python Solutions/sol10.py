class Solution:
    def break_palindrome(self, p):
        start = 0
        end = len(p) - 1
        
        if len(p) <= 1:
            return "-1"
        
        while start < end:
            if p[start] != 'a' and p[end] != 'a':
                p = p[:start] + 'a' + p[start + 1:]
                return p
            
            start += 1
            end -= 1
        
        p = p[:-1] + 'b'
        return p

# Main function
def main():
    t = int(input())
    ans = []
    sol = Solution()

    for _ in range(t):
        s = input()
        temp = sol.break_palindrome(s)
        ans.append(temp)

    for it in ans:
        print(it)

# Run the main function
if __name__ == "__main__":
    main()
