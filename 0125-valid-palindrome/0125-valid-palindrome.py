class Solution(object):
    def isPalindrome(self, s):
        sentence = ''.join([char.lower() for char in s if char.isalnum()])
        return sentence == sentence[::-1]
        
        
        