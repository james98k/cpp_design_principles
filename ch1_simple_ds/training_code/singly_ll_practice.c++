#include <iostream>
#include <algorithm>

struct singly_ll_node{
	int data;
	singly_ll_node * next;
}

class singly_ll{
	public : 
		using node = singly_ll_node;
		using node_ptr = node*;

	private : 
		node_ptr = head;

}

class singly_ll_iterator{
	private :
		node_ptr ptr;

	public : 
		singly_ll_iterator(node_ptr p) : ptr(p) {}

		int& operator*() { return ptr -> data; }

		node_ptr get() {return ptr; }

}




int main(){
	


}

