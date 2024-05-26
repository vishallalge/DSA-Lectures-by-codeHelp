
// Reverse words: https://leetcode.com/problems/reverse... 

// this is ans for this question but it required subscription of leetcode
// this code you can try on this question and check it out   ---->   'Reverse Words In A String'  on coding ninjas


string reverseString(string &str){
	int i = 0;
	int n = str.length();
	string ans = "";
	while(i<n){
		string a = "";
		if(str[i] != ' '){
			if(i<n && i>0){
				ans = ' '+ans;
			}
			while(str[i] != ' ' && i<n){
			a = str[i] + a;
			i++;	
			}
			ans = a + ans;
		}
		else{
			i++;
		}
	}
	return ans;
}



// input
Ninjas Coding to Welcome

// output
sajniN gnidoC ot emocleW