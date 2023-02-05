class Solution:
    def isNumber(self, s: str) -> bool:
        digitFlag=dotFlag=eFlag=False
        countSign=0
        n=len(s)
        for i in range(n):
            if s[i].isdigit():digitFlag=True
            elif s[i]=='+' or s[i]=='-':
                if countSign==2:return False
                if i==n-1:return False
                if i>0 and not (s[i-1]=='e' or s[i-1]=='E'):return False
                countSign+=1
            elif s[i]=='.':
                if dotFlag==True:return False
                if eFlag==True:return False
                if i==n-1 and digitFlag==False:return False
                dotFlag=True
            elif s[i]=='e' or s[i]=='E':
                if eFlag==True:return False
                if digitFlag==False:return False
                if i==0 or i==n-1:return False
                eFlag=True
            else:return False
            
        return True
