class Solution:
    def myPow(self, x: float, n: int) -> float:
        if(n<0):
            n=-n
            return float(1/x)**n
        else:
            return float(x**n)
