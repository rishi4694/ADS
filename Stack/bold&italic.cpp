#include<bits/stdc++.h>
using namespace std;
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
		char Pop(){
			char x;
			if(top==-1){
				cout<<"Stack Underflow";
				exit(1);
			}
			x=item[top];
			top--;
			return x;
		}
		char StackTop()
		{
			char x=item[top];
			return x;
		}
		bool isEmpty()
		{
			if(top==-1)
			    return true;
			else
			    return false;    
		}
};
int main(){
	string exp;
	cout<<"Enter an expression : ";
	cin>>exp;
	Stack s(10);
	int i=0, flag=1;
	while(i<exp.size()){
		char x=exp[i];
		i++;
		if(x=='_' || x=='*'){
			s.Push(x);
		}
		else{
			if(s.isEmpty()){
			     flag=0;
			     break;
		    }
			else{
				char y=s.StackTop();
				if((x=='_' && y=='_') || (x=='*' && y=='*') ){
			     s.Pop();
			    }
			    else{
			    	break;
				}
			}
		}
	}
	if(!s.isEmpty()){
		cout<<"Invalid Expression";
	}
	else{
		if(flag==0){
		      cout<<"Invalid Expression";
		}
		else{
		      cout<<"Valid Expression";
		}
	}
}
