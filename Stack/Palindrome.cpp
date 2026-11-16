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
	string str;
	cout<<"Enter a string : ";
	cin>>str;
	Stack s(10);
	int i=0;
	while(i<str.size()){
		char x=str[i];
		s.Push(x);
		i++;
	}
	i=0;
	cout<<"Reversed string is: ";
	while(i<str.size()){
		// char x=str[i];
		// char y=s.StackTop();
		cout<<s.Pop();
		i++;
	}
}
	
