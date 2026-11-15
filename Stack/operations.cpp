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
		bool IsEmpty()
		{
			if(top==-1)
			    return true;
			else
			    return false;    
		}
};
int main(){
	Stack S(6);
	S.Push('a');
	S.Push('b');
	S.Push('c');
	cout<<S.Pop()<<endl;
	cout<<S.StackTop()<<endl;
	S.Push('d');
	cout<<S.Pop()<<endl;
	cout<<S.Pop()<<endl;
	cout<<S.StackTop()<<endl;
	cout<<S.Pop()<<endl;
	cout<<S.Pop()<<endl;
}
	
	

