#include <iostream>
using namespace std;
struct node
{
	int data;
	node *pre;
	node *next;
};
/****************************************************************************/
node *f,*r;
/****************************************************************************/
node* getNode(){
	node *p=new node;
	return p;
}
/****************************************************************************/
void insFront(int x){
	node *p=getNode();
	p->data=x;
	p->pre=NULL;
	p->next=f;
	if(f!=NULL){
		f->pre=p;
	}
	else{
		r=p;
	}
	f=p;
}
/****************************************************************************/
void insRear(int x){
	node *p=getNode();
	p->data=x;
	p->next=NULL;
	p->pre=r;
	if(r!=NULL){
		r->next=p;
	}
	else{
		f=p;
	}
	r=p;
}
/****************************************************************************/
void traverse(){
	node *p=f;
	while(p!=NULL){
		cout<<p->data<<"-->";
		p=p->next;
	}
}
/****************************************************************************/
int delFront(){
	node*p=f;
	int x=p->data;
	f=f->next;
	delete p;
	if(f!=NULL){
		f->pre=NULL;
	}
	else{
		r=NULL;
	}
	return x;
}
/****************************************************************************/
int delRear(){
	node*p=r;
	int x=p->data;
	r=r->pre;
	delete p;
	if(r!=NULL){
		r->next=NULL;
	}
	else{
		f=NULL;
	}
	return x;
}
/****************************************************************************/
int main(){
	f=NULL;
	r=NULL;
	insFront(1);
	insFront(2);
	insFront(3);
	insFront(4);
	insRear(5);
	insRear(6);
	insRear(7);
	traverse();
	cout<<endl;
	cout<<delFront()<<endl;
	cout<<delFront()<<endl;
	cout<<delRear()<<endl;
	traverse();
}
