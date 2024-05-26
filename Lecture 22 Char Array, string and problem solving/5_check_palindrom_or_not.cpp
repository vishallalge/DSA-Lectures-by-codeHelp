// homework
/*
NO1:- 
you have to create program for palindrom or not but under the one condition that is
if in your string include any type of symbol like on the num pad 1 to 0 reject and go on the 
next part of the character...

hint: you have to modify code using if - else condition in the position of increment and decrement...


NO2:- 
remove perticular group of character form the string 

NO3:-
Purmutation in string

NO4:- 
Remove all ajcent duplicates

NO5:- 
String compressium

ALL THIS QUESTIONS ARE VERY IMPORTANT QUESTIONS SO SOLVE IT FOR BETTER PROBLEM SOLVING SKILL
*/



// leetcode problem: 125. Valid Palindrome
class Solution {
    private: 
        bool valid(char ch){
            if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
                return 1;
            }
            return 0;
        }

        char toLowercase(char ch){
            if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
                return ch;
            }
            else{
                char temp = ch - 'A' + 'a';
                return temp;
            }
        }
        bool checkPlindrome(string a){
            int s = 0;
            int e = a.length()-1;
            while(s<=e){
                if(a[s] != a[e]){
                    return 0;
                }
                else{
                    s++;
                    e--;
                }
            }
            return 1;
        }
    public:
        bool isPalindrome(string s) {
        // remove useless char
        string temp = "";
        
        for(int i = 0; i<s.length(); i++){
            if(valid(s[i])){
                temp.push_back(s[i]);            
            }
        }

        //convert into lowercase
        for(int i = 0; i<temp.length(); i++){
            temp[i] = toLowercase(temp[i]);
        }

        //check palindrome
        return checkPlindrome(temp);
        }
};