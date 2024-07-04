class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastWordLen = 0;
        int currentWordLen = 0;
        for(int i=0;i< s.size();i++){
            if(s[i] ==' '){
                currentWordLen = 0;
            }else{
                currentWordLen++;
                lastWordLen = currentWordLen; 
            }
        }
        
        return lastWordLen;
        
    }
};