class Solution:
    def sortSentence(self, s: str) -> str:
        a= s.split(" ")
        b=["  "]*len(a)
        for i in a:
            s= int(i[-1])-1
            b[s]=i[:-1]
        return " ".join(b)



















        