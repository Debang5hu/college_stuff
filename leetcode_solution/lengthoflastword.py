class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        w=s[::-1].lstrip()
        nw=''
        for y in w:
            if y==' ':
                break
            else:
                nw+=y
        return len(nw)
