package Java;
class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()){
            return false;
        }
        int[] char_c = new int[26];
        for(int i = 0; i < s.length(); i++){
            char_c[s.charAt(i) - 'a']++;
            char_c[t.charAt(i) - 'a']--;  
        }
        for(int count : char_c){  
            if(count != 0){
                return false;
            }
        }
        return true;
    }
}