class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Create maps to count character frequencies
        unordered_map<char, int> charCountRansom;
        unordered_map<char, int> charCountMagazine;
        
        // Count characters in ransomNote
        for (char c : ransomNote) {
            charCountRansom[c]++;
        }
        
        // Count characters in magazine
        for (char c : magazine) {
            charCountMagazine[c]++;
        }
        
        // Check if magazine has enough characters to construct ransomNote
        for (auto& pair : charCountRansom) {
            char c = pair.first;
            int countNeeded = pair.second;
            
            if (charCountMagazine[c] < countNeeded) {
                return false;
            }
        }
        
        return true;
    }
};
