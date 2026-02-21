import math

class Solution:
    def solve(self):
        n, t = map(int, input().split())
        l = 10 ** (n - 1)
        u = 10 ** n - 1
        mn = ((l + t - 1) // t) * t
        mx = (u // t) * t
        if mn > mx or u < t:
            print(-1)
            return
        print(mn)

if __name__ == "__main__":
    Solution().solve()
