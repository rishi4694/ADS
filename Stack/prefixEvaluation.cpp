#include<bits/stdc++.h>
using namespace std;
int Evaluate(int a, int b, char op){
	switch(op){
		case '+': return a+b;
		case '-': return a-b;
		case '*': return a*b;
		case '/': return a/b;
		case '%': return a%b;
		case '^': return pow(a,b);
	}
}
class Stack
{
	vector<int> item;
	int top;
	public:
		Stack(int s)
		{
		   item.resize(s);
		   top=-1;	
		}
		void Push(char x)
		{
			if(top==item.size()-1)
			{
				cout<<"Stack Overflow";
				exit(1);
			}
			top++;
			item[top]=x;
		}
	/************************************/
		int Pop(){
			char x;
			if(top==-1){
				cout<<"Stack Underflow";
				exit(1);
			}
			x=item[top];
			top--;
			return x;
		}
		int StackTop()
		{
			char x=item[top];
			return x;
		}
		bool IsEmpty()
		{
			if(top==-1)
			    return true;
			else
			    return false;    
		}
};
int main(){
	string prefix;
	cout<<"Enter the prefix expression";
	cin>>prefix;
	Stack S(100);
	for(int i=prefix.size()-1; i>=0; i--){
		char symbol=prefix[i];
		if(symbol>='0' && symbol<='9'){
			S.Push(symbol-'0');
		}
		else{
			int a=S.Pop();
			int b=S.Pop();
			int value=Evaluate(a,b,symbol);
			S.Push(value);
		}
	}
	int y=S.StackTop();
	cout<<y;
	return 0;
}
