class Solution {
public:
    bool isPalindrome(string s) {vector<char> charArr;
       for(char c: s) {
           if(isalnum(c)){

            charArr.push_back(tolower(c));
           }}
    for(int i=0;i<charArr.size()/2;i++){
        if(charArr[i]!=charArr[charArr.size()-1-i]){return false;}
            
    }


return true;

            } 
};
