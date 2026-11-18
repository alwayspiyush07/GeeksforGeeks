class Solution {
public:
    int minChanges(string s) {
        int countchanges = 0;
        int stringlength = s.size();
        for(int i = 1; i < s.size(); i+=2){
            if(s[i]!=s[i-1]){
                countchanges++;
            }
        }
        return countchanges;
    }
};