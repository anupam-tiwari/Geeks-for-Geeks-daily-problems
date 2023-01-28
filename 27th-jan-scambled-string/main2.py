#User function Template for python3
from collections import Counter
from functools import lru_cache
class Solution:
    @lru_cache(None)
    def isScramble(self,S1: str, S2: str):
        if  Counter(S1) != Counter(S2): 
            return False
        if len(S1) == 1: 
            return True
        for i in range(1,len(S1)): 
            if(self.isScramble(S1[:i],S2[:i]) and self.isScramble(S1[i:],S2[i:])): 
                return True
            if(self.isScramble(S1[:i],S2[-i:]) and self.isScramble(S1[i:],S2[:-i])): 
                return True
        return False
        ##code here
