#include <iostream>
#include <stack>

int main() {
	const std::string str = "(((()))";
	std::stack <char> s;
	for (int i=0; i!=str.size(); ++i) {
		if(str[i]=='('){
			s.push(str[i]);
		}
		if(str[i]==')'){
			if(s.size()==0){
				std::cout <<"Mismatch"<<std::endl;
				return 1;
			}
			char checkParenthesis=s.top();
			if(checkParenthesis=='('){
				s.pop();
			} else if(checkParenthesis==')'){
				std::cout<<"Mismatch"<<std::endl;
				return 1;
			}
		}
	}
	if(s.size()!=0){
		std::cout<<"Mismatch"<<std::endl;
		return 1;
	}
	std::cout<<"Good job my KITTEN_EMOJI 🐨"<<std::endl;

}
