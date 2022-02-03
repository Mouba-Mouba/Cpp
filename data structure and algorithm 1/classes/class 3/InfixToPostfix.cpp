#include<iostream>
#include<stack>
using namespace std;

int orderPrec(char c){
	if(c== '^')
		return 3;
	else if(c == '*' || c == '/')
		return 2;
	else if(c == '+' || c == '-')
		return 1;
	else
		return -1;
}

void infixToPostfix(string s){
	stack<char> stacc;
	
	stacc.push('N');
	int l = s.length();
	
	string answer;
	
	for(int i=0; i<=l; i++){
	
		if((s[i] >= 'a' && s[i] <= 'z' )||(s[i] >= 'A' && s[i]<='Z'))
		{
				answer+=s[i];
			

			
}
		
		else if(s[i] == '(')
			stacc.push('(');
		
		else if(s[i] == ')'){
			while(stacc.top()!='N' && stacc.top() != '('){
				char c = stacc.top();
				stacc.pop();
				answer += c;
							


			}
			if(stacc.top() == '('){
				char c= stacc.top();
				stacc.pop();
			}
		}
		
		else{
			while(stacc.top() != 'N' && orderPrec(s[i]) <= orderPrec(stacc.top())){
				char c = stacc.top();
				stacc.pop();
				answer += c;
			
			}
			stacc.push(s[i]);
		}
	}
	
	cout << answer << endl;
}

int main(){
	string exp = "a+b*c+(d*e+f)*g"; //a b -c d e * +
	infixToPostfix(exp);
	
	return 0;
}
